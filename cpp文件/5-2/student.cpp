#include<iostream>
#include"student.h"
//在此文件中进行函数的定义
void Student::display()//在类外定义display类函数//表示Student空间下的display函数
{
    cout << " num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}