#include <iostream>

int main(void)
{
	int dan;
	std::cout << "¸î´Ü? : ";
		std::cin >> dan;

	for (int i = 1; i < 10; i++)
		std::cout << dan << "x" << i << '=' << dan * i << std::endl;
	return 0;

}