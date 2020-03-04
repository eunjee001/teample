#include <iostream>

int main(void)
{
	char name[50];
	char phonenum[50];

	std::cout << "이름 : ";
		std::cin >> name;

		std::cout << "전화번호 : ";
		std::cin >> phonenum;

		std::cout << "내이름은 " << name << "입니다.\n";
		std::cout << "내 전화번호는" << phonenum << "입니다." << std::endl;
	return 0;
}
