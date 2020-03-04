#include <iostream>

int BoxValume(int length, int width, int height)
{
	return length * width*height;
}

int BoxValume(int length, int width)
{
	return length * width * 1;
}

int BoxValume(int length)
{
	return length * 1 * 1;
}

int main(void)
{
	std::cout << "[3,3,3] : " << BoxValume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << BoxValume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxValume(7) << std::endl;
	return 0;

}