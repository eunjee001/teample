#include <iostream>

int main(void)
{
	char name[50];
	char phonenum[50];

	std::cout << "�̸� : ";
		std::cin >> name;

		std::cout << "��ȭ��ȣ : ";
		std::cin >> phonenum;

		std::cout << "���̸��� " << name << "�Դϴ�.\n";
		std::cout << "�� ��ȭ��ȣ��" << phonenum << "�Դϴ�." << std::endl;
	return 0;
}
