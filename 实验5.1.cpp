#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:

	void a(Time t1)
	{
	
		cin >> t1.hour;      //�����趨��ʱ�� 
		cin >> t1.minute;
		cin >> t1.sec;
		cout << t1.hour << ";" << t1.minute << ";" << t1.sec << endl;
	}
};
int main()
{
	Time tl{};     //����t1ΪTime�����
	tl.a(tl);
	
	return 0;
}