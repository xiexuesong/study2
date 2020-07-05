//
// Created by 15755 on 2020/7/1.
//

#pragma once //只包含一次

//这里的宏的作用 防止重复导入
//#ifndef STUDY2_MYTEACHER_H
//#define STUDY2_MYTEACHER_H

//.h头文件做类的声明
class MyTeacher {
private:
    int m_age;
    char m_name[32];
protected:
public:
    void setAge(int age);
    int getAge();
};


//#endif //STUDY2_MYTEACHER_H
