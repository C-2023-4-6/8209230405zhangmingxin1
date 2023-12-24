#include<iostream>
using namespace std;
class cube
{
public:
	void set(int Length, int Width, int Height)
	{
		length = Length;
		width = Width;
		height = Height;
	}
	int suan()
	{
		int v = length * width * height;
		return v;
	}
private:
	int length;
	int width;
	int height;
};
int main()
{
	cube a;
	a.set(1, 2, 2);
	
	cout << "a的体积为：" << a.suan() << endl;
	cube b;
	b.set(1, 5, 2);
	cout << "b的体积为：" << b.suan() << endl;
	cube c;
	c.set(1, 2, 7);
	cout << "c的体积为：" << c.suan() << endl;
	return 0;
}