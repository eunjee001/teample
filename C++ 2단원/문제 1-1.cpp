#include<iostream>
using namespace std;

void SwapByRef2(int &ref)
{
	ref++;
	ref *= -1;
}


int main(void)
{
	int val = 10;

	SwapByRef2(val);
	cout << "val: " << val << endl;
	return 0;
}