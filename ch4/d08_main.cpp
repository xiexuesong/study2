//
// Created by 15755 on 2020/7/6.
//
#include <iostream>

using namespace std;

class A {
public:
    A(int a) {
        m_a = a;
        cout << "构造函数" << " m_a: " << m_a << endl;
    }

    int getA() {
        return m_a;
    }

    ~A() {
        cout << "析构函数" << endl;
    }

private:
    int m_a;
};

/*
 * 构造函数的初始化列表
 * 语法: ClassName() : m1(xxx) , m2(xxx),m3(xxx)
 * 为了在B类中组合了一个A类对象(A类有参数的构造函数)
 */
class B {
public:
//    B(int b , A a):m_b(10), m_a(2) {//构造函数的初始化列表 初始化列表相当于默认值
//        m_b = b;
//        m_a =a;
//    }
    B() : m_a2(2), m_a1(2), m_a(1), m_b(10) ,c(3){//初始化列表一定要注意顺序问题

    }

    /**
     * 正确的初始化顺序应该和声明成员变量的顺序一致
     * @param b
     */
    B(int b) : m_b(1) , m_a(20),m_a1(3) ,m_a2(20),c(2){//初始化成员列表一定要按照成员变量的顺序来

    }

    void print() {
        cout << "m_a:" << m_a.getA() << " m_b:" << m_b << endl;
    }


private://初始化列表的里面初始化的顺序是按照我们成员变量声明的顺序，不是初始化列表的顺序
    int m_b;//在初始化列表里面 m_a(1) , m_b(2) ，这个是谁先初始化
    A m_a;
    A m_a1;
    A m_a2;

    const int c; //常量  必须要通过初始化列表初始化
};
// 我要初始化B的对象b1的时候，必须先初始化B类的成员变量A类型m_a
//默认构造函数
/*
 *1、默认的无参构造函数，当我们的类没有定义构造函数是，c++编译器会默认提供一个无参构造函数
 *2、当我嗯自己写了构造函数后，系统就不会再提供默认的无参构造函数了
 *3、默认拷贝函数
 *4、只要你写了构造函数，c++编译器就不会提供默认的
 */
int main() {
    //TODO 多个对象的初始化和析构
    cout << "多个对象的和析构" << endl;

    //基础类型也可以这样用
    int b(12);
    float f(3.140);
    //自动装箱  自动拆箱
    A a(10);

//    B b2(20, A(10));
//    b2.print();
    //初始化列表顺序研究
    B b2;

    return 0;
}
