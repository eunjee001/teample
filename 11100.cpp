#include<stdio.h>
int main()
{
	int Number;
	int result;
	int A, B, C, D;
	int count = 0;

	scanf_s("%d", &Number);
	result = Number;

	while (1)
	{
		A = Number / 10;
		B = Number % 10;
		C = (A + B) % 10;
		D = (B * 10) + C;
		Number = D;
		count++;
		if (D == result)
			break;
	}
	printf("%d", count);
}
