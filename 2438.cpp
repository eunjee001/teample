#include<stdio.h>

void main()
{
	int star1, star2, N;
	scanf_s("%d", &N);
	for (star1 = 1; star1 <= N; star1++)
	{
		for (star2 = 1; star2 <= star1; star2++)
		{
			printf("*");
		}
		printf("\n");
	}
}