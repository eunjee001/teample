#include<iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
			ypos = y;

	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	int rad;
	Point center;
public:
	void Init(int x, int y, int r)
	{
		rad = r;
			center.Init(x, y);
	}
	void ShowCircleInfo() const
	{
		cout << "radius: " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:
	Circle inCircle;
	Circle outCircle;
public:
	void Init(int inx, int iny, int inr, int outx, int outy, int outr)
	{
		inCircle.Init(inx, iny, inr);
		outCircle.Init(outx, outy, outr);
	}
	void ShowRingInfo()  const
	{
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		outCircle.ShowCircleInfo();

	}
};
int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}

