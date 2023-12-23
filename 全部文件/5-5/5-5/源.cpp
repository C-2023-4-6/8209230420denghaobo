#include<iostream>;
using namespace std;

class Point
{
private:
	int X;
	int Y;
public:
	Point(int x = 60, int y = 80)//构造函数，定义对象时初始化
	{
		X = x;
		Y = y;
	}
	void setPoint(int i, int j)//定义函数修改坐标
	{
		X += i;
		Y += j;
	}
	void display()//定义函数输出坐标
	{
		cout << "(" << X << "," << Y << ")";
	}
};
int main()
{
	Point p;
	p.setPoint(2, 3);//调用函数修改坐标
	p.display();//输出坐标
	cout << endl;
	system("pause");
	return 0;
}