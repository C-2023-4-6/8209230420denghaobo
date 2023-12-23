#include<iostream>
using namespace std;

class Cuboid
{
private:
	double length;
	double width;
	double height;
public:
	void setlength(double len)//设置长
	{
		length = len;
	}
	void setwidth(double wid)//设置宽
	{
		width = wid;
	}
	void setheight(double hei)//设置高
	{
		height = hei;
	}
	double getlegth()//输出长
	{
		return length;
	}
	double getwidth()//输出宽
	{
		return width;
	}
	double getheight()//输出高
	{
		return height;
	}
	double getvolume()//设计一个返回值为体积的函数
	{
		return(getlegth() * getwidth() * getheight());
	}
};
int main()
{
	double l, w, h;
	Cuboid p;
	cout << "请输入长方柱的长：";
	cin >> l;
	cout << "请输入长方柱的宽：";
	cin >> w;
	cout << "请输入长方柱的高：";
	cin >> h;
	p.setlength(l);//利用函数初始化长
	p.setwidth(w);//利用函数初始化宽
	p.setheight(h);//利用函数初始化高
	cout << "长方柱的体积为：" << p.getvolume() << endl;//输出体积
	system("pause");
	return 0;
}