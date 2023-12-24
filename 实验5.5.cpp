#include<iostream>
using namespace std;
class point
{
public:
	point(int X, int Y)
	{
		x = X;
		y = Y;
	}
	void setPoint(int i, int j)
	{
		x = i + 60;
		y = j + 80;
	}
	void display()
	{
		cout << "修改后x的坐标为：" << x << endl;
		cout << "修改后y的坐标为：" << y << endl;
	}
private:
	int x;
	int y;
};
int main()
{
	point begin(60, 80);
	begin.setPoint(60, 80);
	begin.display();
	return 0;
}