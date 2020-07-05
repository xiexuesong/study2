//
// Created by 15755 on 2020/6/30.
//

#include <iostream>

using namespace std;

//c++ 内联函数
void printA();//方法声明

#define MYFUNC(a, b) ((a) < (b)) ? a : b

//c++内联函数 inline 避免入栈出栈的小号
//内联函数的声明和定义必须在一起，即声明的时候必须实现
//1、内联函数 声明和定义不能分开
//2、内联函数必须放在调用他的方法的前面
//3、c++编译器不一定会允许函数内联
//当我们的函数本身代码执行的代价 大于函数调用压栈出栈的开销的时候，内销将没有任何意义
//限制
/**
 * 限制:
 * 1、不能存在任何形式的循环语句
 * 2、不能存在过多的条件判断语句
 * 3、函数体不能过于庞大
 * 4、不能对函数进行取地址操作
 * 5、函数内联声明必须再调用语句之前
 */
inline void printB() {
    int a = 10;
    cout << "a: " << a << endl;
}

int main() {
    cout << "函数" << endl;
    printA();
    //c语言
    MYFUNC(1, 2);
    //把printB的代码嵌入到调用点
    printB();
    return 0;
}

void printA() {
    //定义实现
    cout << "printA" << endl;
}