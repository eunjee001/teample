#include <iostream>

void swap(int * sw1, int * sw2)
{
	int temp = *sw1;
	*sw1 = *sw2;
		*sw2 = temp;
}

void swap(char * sw1, char * sw2)
{
	char temp = *sw1;
	*sw1 = *sw2;
		*sw2 = temp;
}

void swap(double * sw1, double * sw2)
{
	double temp = *sw1;
		*sw1 = *sw2;
	*sw2 = temp;
}

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
		swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
}