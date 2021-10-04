#include<iostream>
#include<ctime>
#include<cstdlib>

void oddsEvens(int a) {
	for (int i = 0; i <= a; i++) {
		if (i % 2 != 0) {
			std::cout << i << " is even \n";
		}
		else {
			std::cout << i << " is odd \n";
		}
	}
}
void guesAnumber() {
	srand(time(nullptr));
	int a = rand() % 1000;
	int gues;
	std::cout << "please input a number ";
	std::cin >> gues;
	while (gues != a) {
		if (gues > a) {
			std::cout << "the number u gues is too big\n";
			std::cout << "please reselect a number \n";
			std::cin >> gues;
		}
		else {
			std::cout << "the number u gues is too low \n";
			std::cout << "please reselect a number \n";
			std::cin >> gues; 
		}
	}
	std::cout << "Congratulation, you corectly guesed a number!";
}
int main() 
{
	int a = 0;
	std::cout << "please, enter a number\n";
	std::cin >> a;
	oddsEvens(a);
	guesAnumber();
	return 0;
}
	