#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:

	void a(Time t1)
	{
	
		cin >> t1.hour;      //输入设定的时间 
		cin >> t1.minute;
		cin >> t1.sec;
		cout << t1.hour << ";" << t1.minute << ";" << t1.sec << endl;
	}
};
int main()
{
	Time tl{};     //定义t1为Time类对象
	tl.a(tl);
	
	return 0;
}