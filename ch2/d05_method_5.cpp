//
// Created by 15755 on 2020/7/1.
//
#include <iostream>
using namespace std;

void myFunc5(int a){
    cout << "a: " << a << endl;
}

void myFunc5(char* a){
    cout << "a: " << a << endl;
}

void myFunc5(int a,int b){
    cout << "a: " << a << " b:" << b << endl;
}
/*
 * 函数指针 基础的语法
 *
 */
typedef void (myTypeFunc5)(int a, int b);//声明了一个函数类型
//声明一个函数指针类型
typedef void (*myFunc51)(int a, int b);

int main(){

    myTypeFunc5  *func = NULL;
    func = myFunc5;
    func(1,2);

    myFunc51  func51 = NULL;
    func51 = myFunc5;
    func51(3,4);
    return 0;
}
