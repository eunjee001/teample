#include <stdio.h>
int main(void)
{
	int num;
	int n;
	int min, max;
	printf("10개의 정수 입력하세요.\n");
	scanf_s("%d", &num);

	min = max = num;
	for (n = 2; n < 10; n++)
	{

		scanf_s("%d", &num);
		if (min > num)
		{
			min = num;
		}
		if (max < num)
		{
			max = num;
		}
	}
	printf("최소값:%d 최대값:%d\n", min, max);
	return 0;
}
