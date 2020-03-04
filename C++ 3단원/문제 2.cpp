#include<iostream>
using namespace std;

class Calculator
{
private:
	int numofAdd;
	int numofMin;
	int numofGop;
	int numofDiv;
public:
	void Init();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Gop(double num1, double num2);
	double Div(double num1, double num2);
	void ShowOpCount();

};
void Calculator::Init()
{
	numofAdd = 0;
	numofMin = 0;
	numofGop = 0;
	numofDiv = 0;
}
double Calculator::Add(double num1, double num2)
{
	numofAdd++;
	return num1 + num2;
}
double Calculator::Min(double num1, double num2)
{
	numofMin++;
	return num1 - num2;
}
double Calculator::Gop(double num1, double num2)
{
	numofGop++;
	return num1 * num2;
}
double Calculator::Div(double num1, double num2)
{
	numofDiv++;
	return num1 / num2;
}
void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << numofAdd << ' ';
	cout << "»¬¼À: " << numofMin << ' ';
	cout << "°ö¼À: " << numofGop << ' ';
		cout << "³ª´°¼À: " << numofDiv << endl;
}

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2+2.4= " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5/1.7= " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2-1.5= " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9/1.2= " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}
