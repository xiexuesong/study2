//
// Created by 15755 on 2020/7/2.
//

#include <iostream>
#include <string.h>

using namespace std;

/*
 * 构造函数
 * 1、没有返回值
 * 2、函数名称和类名相同
 *
 * 析构函数
 * 1、没有返回值
 * 2、函数名称和类名相同
 *
 * c/c++里面存在在堆区的只有通过malloc 和colloc动态分配的存放在堆区
 * 其他的局部变量都是存放于栈中，不包括常量以及静态变量
 *
 * 在堆中创建的对象或者变量需要开发者本身去管理他的生命周期
 * 栈中是编译器自己去释放
 */
class Test {
private:
    int a;//类的成员变量
    char *p;

public:
    Test() {//构造函数 初始化工作
        a = 10;
        // p = (char *)"sjklajsda";
        p = (char *) malloc(100);//给p变量在堆区分配了一块内存
        strcpy(p, "11111111");
        cout << "构造函数" << endl;
    }

    ~Test() {//析构函数 释放资源的工作
        //析构函数是当我们的对象被销毁之前由编译器主动去调用的
        if (p != NULL) {
            free(p);//释放p
            p = NULL;
        }
        cout << "析构函数" << endl;
    }

    void print() {//成员函数
        cout << sizeof(p) << endl;
        cout << "a: " << a << " p:" << p << endl;
    }
};

void objTest() {
    Test t1;//创建一个对象
    t1.print();
}

int main01() {
    objTest();


    return 0;
}

class Test2 {
public:
    void init(int a, int b) {
        m_a = a;
        m_b = b;
    }

    Test2() {//无参构造函数 ，如果不声明就会有一个默认的无参构造函数
        m_a = 0;
        m_b = 0;
        cout << "无参:" << m_a << " " << m_b << endl;
    }

    Test2(int a) {
        m_a = a;
        m_b = 0;
        cout << "有参: " << m_a << " " << m_b << endl;
    }

    Test2(const Test2 &obj) {//是一个拷贝构造函数
        m_a = obj.m_a;
        cout << "我也是构造函数: " << m_a << " " << m_b << endl;
    }

    ~Test2(){//析构函数
        cout << "析构函数:" << "m_a:" << m_a << " m_b:" << m_b << endl;
    }

    void print() {
        cout << "print: " << m_a << " " << m_b << endl;
    }

    int getA() {
        return m_a;
    }

private:
    int m_a;
    int m_b;
};

void objTest2() {
    Test2 t1;//调用无参的构造函数
}

void objTest3() {
    //第一种调用有参构造方法
    //c++编译器自动调用对应的构造函数
    Test2 t1(1);//调用有参构造函数
    //第二种调用方法
    Test2 t2 = (2);//相当于c++对 =号 功能增强，调用了构造函数
    //第三种调用构造方法
    Test2 t3 = Test2(2);
    t1 = t3;//把t3 copy 给 t1 赋值操作

    //拷贝构造函数的调用
    Test2 t4 = t3;//调用了拷贝构造函数
    Test2 t7(t4);//调用了拷贝构造函数
    Test2 t8 = Test2(t7);//调用拷贝构造函数

}

void objTest4() {
    Test2 t1;
    t1.init(2, 3);

    Test2 tArr[3];
    tArr[0].init(1, 2);
    tArr[1].init(1, 2);
    tArr[2].init(1, 2);
}

//拷贝构造函数调用时机
//1、当我们用t2实参初始化形参t的时候，会自动调用拷贝构造函数
void copyTest(Test2 t) {//第三种拷贝函数调用时机
    cout << t.getA() << endl;
}

//第四种调用拷贝函数时机
Test2 getTest2() {
    Test2 t(4);
    return t;
}

void objTest5() {
    Test2 t(1);
    Test2 t2 = t;//第一种拷贝函数调用时机

    Test2 t3(t2);//第二种拷贝函数调用时机
    t2.print();

    copyTest(t2);//会调用拷贝构造函数
};

void objTest6() {
    Test2 t = getTest2();
    t.print();
}

int main2() {
//    objTest2();
//    objTest3();
//    objTest4();
    //   objTest5();
    objTest6();
    return 0;
}



int main(){
    //初始化列表


    return 0;
}

