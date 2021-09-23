#include<iostream>
#include<string>

void isNumber(double &value)
{
	while(std::cin.fail())
	{
		std::cout << "Please, input a number\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> value;
	}
}
int main()
{
	double a, b, c, average; 
	std::cout << "Please enter 1st real number\n";
	std::cin >> a;
	isNumber(a);
	std::cout << "Please enter 2nd real number\n";
	std::cin >> b;
	isNumber(b);
	std::cout << "Please enter 3rd real number\n";
	std::cin >> c;
	isNumber(c);
	average = (a + b + c) / 3;
	std::cout << average; 
	return 0;
}