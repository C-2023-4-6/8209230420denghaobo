#include<iostream>
#include"student.h"

int main()
{
	Student stud;                //定义对象
	stud.set_value(7, "tcg", 'm');//初始化
	stud.display();              //执行stud对象的display函数
	return 0;
}