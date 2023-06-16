#include <iostream>
#include <random>

int main()
{
	std::random_device rng;
	std::cout << rng() << std::endl;
	return 0;
}