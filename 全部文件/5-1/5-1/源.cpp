#include<iostream>
using namespace std;

class Time             // ����Time��
{
private:              // ���ݳ�Ա��Ϊ˽�е�
	int hour;
	int minute;
	int sec;
public:				  //�����ﶨ���Ա��������Ա����Ϊ���õ�
	void sethour(int m_hour)//����Сʱ
	{
		hour = m_hour;
	}
	void setmin(int m_min)//���÷���
	{
		minute = m_min;
	}
	void setsec(int m_sec)//��������
	{
		sec = m_sec;
	}
	int gethour()//���Сʱ
	{
		return hour;
	}
	int getminute()//�������
	{
		return minute;
	}
	int getsec()//�������
	{
		return sec;
	}
};
int main()
{
	Time t1; //����t1ΪTime�����
	int h, m, s;//���������Сʱ�����ӣ�����
	cout << "������Сʱ��";
	cin >> h;
	cout << "��������ӣ�";
	cin >> m;
	cout << "���������ӣ�";
	cin >> s;
	t1.sethour(h);//�ֱ����ú�����ʼ��
	t1.setmin(m);
	t1.setsec(s);
	//���ú������
	cout << t1.gethour() << ":" << t1.getminute() << ":" << t1.getsec();
	cout << endl;
	system("pause");
	return 0;
}