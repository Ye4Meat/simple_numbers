#include <iostream>

bool isEqual(int x)
{
	return (x == 2 || x == 3 || x == 5 || x == 7);
}

int main()
{
	std::cout << "Enter a number from 1 to 10: ";
	int x;
	std::cin >> x;

	bool prime = isEqual(x);

	if (prime)
		std::cout << "The digit is prime" << std::endl;
	else
		std::cout << "The digit is not prime" << std::endl;

	return 0;
}