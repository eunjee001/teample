include<stdio.h>

int main()
{
	int A, B, C;
	int num[10] = { 0, };
	int i;
	int rest, total;

	printf("A를 입력 하시오.\n");
	scanf_s("%d", &A);

	printf("B를 입력하시오.\n");
	scanf_s("%d", &B);

	printf("C를 입력하시오.\n");
	scanf_s("%d", &C);

	total = A * B*C;

	while (total > 0) {
		rest = total % 10;
		total = total / 10;
		num[rest]++;
	}


	for (i = 0; i < 10; i++)
		printf("%d\n", num[i]);
	return 0;



}