#include<iostream>
using namespace std;

class Student
{
public:
	Student(string n, double s)//���캯�����ڸ���ֵ
	{
		num = n;
		score = s;
	}
	string num;
	double score;
};
void max(Student* p)//��ָ������ָ������������
{
	Student* t;//t���ڱ���5��ѧ��
	Student* c;//c���ڴ������ֵ
	double max;
	for (t = p, c = t, max = p->score; t < (p + 5); t++)
	{
		if (t->score > max)//һ��һ���Ƚϳ�Աscore��С
		{
			max = t->score;
			c = t;
		}
	}
	cout << "�ɼ������Ϊ��" << c->num << "��ͬѧ" << endl;//���ѧ��
}
int main()
{
	//���û�����ѧ�źͳɼ�
	string n1, n2, n3, n4, n5;
	double s1, s2, s3, s4, s5;
	cout << "�����������һ��ͬѧ��ѧ�źͷ�����";
	cin >> n1 >> s1;
	cout << "����������ڶ���ͬѧ��ѧ�źͷ�����";
	cin >> n2 >> s2;
	cout << "���������������ͬѧ��ѧ�źͷ�����";
	cin >> n3 >> s3;
	cout << "���������������ͬѧ��ѧ�źͷ�����";
	cin >> n4 >> s4;
	cout << "���������������ͬѧ��ѧ�źͷ�����";
	cin >> n5 >> s5;
	Student s[5] =//����һ������ΪStudent������Ϊ5���������ڴ���5��ͬѧ�����ݣ��������ȡ
	{
		Student(n1,s1),//���и���ֵ
		Student(n2,s2),
		Student(n3,s3),
		Student(n4,s4),
		Student(n5,s5),
	};
	max(s);//�������׵�ַ����
	system("pause");
	return 0;
}