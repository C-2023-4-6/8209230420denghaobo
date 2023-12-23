#include<iostream>
using namespace std;

class Student
{
public:
	Student(string n, double s)//构造函数用于赋初值
	{
		num = n;
		score = s;
	}
	string num;
	double score;
};
void max(Student* p)//用指向对象的指针做函数参数
{
	Student* t;//t用于遍历5个学生
	Student* c;//c用于储存最大值
	double max;
	for (t = p, c = t, max = p->score; t < (p + 5); t++)
	{
		if (t->score > max)//一个一个比较成员score大小
		{
			max = t->score;
			c = t;
		}
	}
	cout << "成绩最高者为：" << c->num << "号同学" << endl;//输出学号
}
int main()
{
	//由用户输入学号和成绩
	string n1, n2, n3, n4, n5;
	double s1, s2, s3, s4, s5;
	cout << "请依次输入第一名同学的学号和分数：";
	cin >> n1 >> s1;
	cout << "请依次输入第二名同学的学号和分数：";
	cin >> n2 >> s2;
	cout << "请依次输入第三名同学的学号和分数：";
	cin >> n3 >> s3;
	cout << "请依次输入第四名同学的学号和分数：";
	cin >> n4 >> s4;
	cout << "请依次输入第五名同学的学号和分数：";
	cin >> n5 >> s5;
	Student s[5] =//建立一个类型为Student，长度为5的数组用于储存5个同学的数据，并方便存取
	{
		Student(n1,s1),//进行赋初值
		Student(n2,s2),
		Student(n3,s3),
		Student(n4,s4),
		Student(n5,s5),
	};
	max(s);//将数组首地址传入
	system("pause");
	return 0;
}