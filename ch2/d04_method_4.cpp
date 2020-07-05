//
// Created by 15755 on 2020/7/1.
//
#include <iostream>
using namespace std;

/*
 * 函数重载
 * 1、函数名一致
 * 2、参数不同(1、个数不同，2、类型不同)
 */
void test(){

}

void test(int a){
    cout << "a: " << a << endl;
}

void test(int a , int b , int c){

}

void test1(int a , int b){
    cout << "a:" << a << endl;
}

void test1(int a , int b , int c = 3){
    cout << "a:" << a << " b:" << b << endl;
}


int main(){
    //重载和默认参数一起调用的时候，会出现二义性，导致不能调用
    //test1(1,2);

    return 0;
}
