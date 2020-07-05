//
// Created by 15755 on 2020/7/1.
//

#include <iostream>
using namespace std;

void myPrint(int x = 1){
    cout << "x:" << x << endl;
}

//如果出现默认参数，那么后面的参数必须全部给默认参数
void myPrint2(int a , int b ,int c =1 , int d =2){
    cout << "a: " << a << " b: " << b << " c:" << c << " d:" << d << endl;
}
//1、若你填写参数，使用你填写的参数，不用默认的
//2、在默认参数规则中，如果默认参数出现，那么右边的参数都必须有默认参数

int main1(){
    myPrint();
    myPrint(2);

    myPrint2(1,2,3,4);
    myPrint2(5,6);
    myPrint2(7,8,9);
    return  0;
}

//函数占位参数
void myPrint3(int a , int b ,int){//这个占位参数只有参数类型，没有参数名
    cout << "a:" << a << " b:" << b << endl;
}

int main2(){
   // myPrint3(1,2)
    myPrint3(1,2,3);
    return 0;
}

//函数默认参数和占位参数结合
void myPrint4(int a , int b , int = 0){
    cout << "a:" << a << " b:" << b << endl;
}
/*
 * 占位参数意义:
 * 1、为以后的程序留下线索
 * 2、兼容c语言中可能出现的不规范写法
 */
int main(){
    myPrint4(1,2);
    return  0;
}

