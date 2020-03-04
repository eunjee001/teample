#include<stdio.h>
int main()
{
	int N, X, num;

	scanf_s("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf_s("%2d", &num);

		if (X > num)
			printf("%d", num);
	}
}