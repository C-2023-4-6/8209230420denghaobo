#pragma once
#include<iostream>
using namespace std;

class Student//��˵��
{
public://���ó�Ա����ԭ������
	void display();
	void set_value(int m_num,const char m_name[], char m_sex)
	{
		t = strlen(m_name);//��ȡ������ַ�����
		num = m_num;
		memcpy(name, m_name, t);//���Ƶ�name��
		sex = m_sex;
	}
private:
	int num;
	int t;
	char *name=new char[t];//��̬�����ڴ�
	char sex;
};