//
// Created by 15755 on 2020/7/1.
//

#include <iostream>
#include "MyTeacher.h"

using namespace std;
// :: 作用域限定运算符
int a;
int main(){
    MyTeacher myTeacher;
    myTeacher.setAge(20);
    cout << "age:" << myTeacher.getAge() << endl;

    float a ;
    a = 3.14;
    ::a = 5;//实现在局部变量a的作用域范围内对全局变量a的访问

    cout << "local a : " << a << " global a :" << ::a << endl;
    return 0;
}
