#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Bye";
		char str3[10];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy(str3, str1);
	strcat(str3, str2);

	if (strcmp(str1, str2) == 0)
		cout << "���ڿ� ����." << endl;
	else
		cout << "���ڿ� ���� �ʴ�." << endl;
	return 0;
}
