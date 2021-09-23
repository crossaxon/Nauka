#include<iostream>
#include<string>
int main()
{
	std::string fullname;
	std::string location; 
	int initialScore;
	std::cout << "Please, input a name and lastname: \n";
	std::getline(std::cin, fullname);
	std::cout << "\n";
	std::cout << "Please, input your location data(city, province, country)\n";
	std::getline(std::cin, location);
	std::cout << "\n";
	std::cout << "Your initial score is?: \n";
	
	std::cin >> initialScore;
	while(std::cin.fail())
	{
		std::cout << "Invalid Entry\nEnter a number" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cin >> initialScore;
	}
	std::cout << "hello, " << fullname << "we heard you're from " << location << "your original score is: " << initialScore << "but with five points added is equal to " << initialScore + 5;

}