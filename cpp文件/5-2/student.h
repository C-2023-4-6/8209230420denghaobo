#pragma once
#include<iostream>
using namespace std;

class Student//类说明
{
public://公用成员函数原型声明
	void display();
	void set_value(int m_num,const char m_name[], char m_sex)
	{
		t = strlen(m_name);//读取输入的字符长度
		num = m_num;
		memcpy(name, m_name, t);//复制到name上
		sex = m_sex;
	}
private:
	int num;
	int t;
	char *name=new char[t];//动态分配内存
	char sex;
};