#include<iostream>;
using namespace std;

class Point
{
private:
	int X;
	int Y;
public:
	Point(int x = 60, int y = 80)//���캯�����������ʱ��ʼ��
	{
		X = x;
		Y = y;
	}
	void setPoint(int i, int j)//���庯���޸�����
	{
		X += i;
		Y += j;
	}
	void display()//���庯���������
	{
		cout << "(" << X << "," << Y << ")";
	}
};
int main()
{
	Point p;
	p.setPoint(2, 3);//���ú����޸�����
	p.display();//�������
	cout << endl;
	system("pause");
	return 0;
}