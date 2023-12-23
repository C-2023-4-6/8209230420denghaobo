#include<iostream>
using namespace std;

class Time             // 定义Time类
{
private:              // 数据成员改为私有的
	int hour;
	int minute;
	int sec;
public:				  //在类里定义成员函数，成员函数为公用的
	void sethour(int m_hour)//设置小时
	{
		hour = m_hour;
	}
	void setmin(int m_min)//设置分钟
	{
		minute = m_min;
	}
	void setsec(int m_sec)//设置秒钟
	{
		sec = m_sec;
	}
	int gethour()//输出小时
	{
		return hour;
	}
	int getminute()//输出分钟
	{
		return minute;
	}
	int getsec()//输出秒钟
	{
		return sec;
	}
};
int main()
{
	Time t1; //定义t1为Time类对象
	int h, m, s;//定义输入的小时，分钟，秒钟
	cout << "请输入小时：";
	cin >> h;
	cout << "请输入分钟：";
	cin >> m;
	cout << "请输入秒钟：";
	cin >> s;
	t1.sethour(h);//分别利用函数初始化
	t1.setmin(m);
	t1.setsec(s);
	//利用函数输出
	cout << t1.gethour() << ":" << t1.getminute() << ":" << t1.getsec();
	cout << endl;
	system("pause");
	return 0;
}