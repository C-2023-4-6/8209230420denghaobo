#include<iostream>
using namespace std;

class Cuboid
{
private:
	double length;
	double width;
	double height;
public:
	void setlength(double len)//���ó�
	{
		length = len;
	}
	void setwidth(double wid)//���ÿ�
	{
		width = wid;
	}
	void setheight(double hei)//���ø�
	{
		height = hei;
	}
	double getlegth()//�����
	{
		return length;
	}
	double getwidth()//�����
	{
		return width;
	}
	double getheight()//�����
	{
		return height;
	}
	double getvolume()//���һ������ֵΪ����ĺ���
	{
		return(getlegth() * getwidth() * getheight());
	}
};
int main()
{
	double l, w, h;
	Cuboid p;
	cout << "�����볤�����ĳ���";
	cin >> l;
	cout << "�����볤�����Ŀ�";
	cin >> w;
	cout << "�����볤�����ĸߣ�";
	cin >> h;
	p.setlength(l);//���ú�����ʼ����
	p.setwidth(w);//���ú�����ʼ����
	p.setheight(h);//���ú�����ʼ����
	cout << "�����������Ϊ��" << p.getvolume() << endl;//������
	system("pause");
	return 0;
}