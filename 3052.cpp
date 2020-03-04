#include <stdio.h>

int main() {
	int numArr[42] = { 0, };
	int num;
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num);
		numArr[num % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (numArr[i] != 0) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}
