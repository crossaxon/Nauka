#include<iostream>
int additionalJams(int a,int b) {
	if (a > b) {
		return a - b;
	}
}
void wrongInput(char &a) {
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> a;
	}
}

int main() {
	
	char pacage;
	int totalPrice=0; 
	int pacagePrice=0; 
	int jamNumber = 0;
	int additionalJam = 0; 
	int jamPrice = 0; 
AGAIN:
	std::cout << "Please select type of pacage A,B or C \n";
	std::cin >> pacage;	
	wrongInput(pacage);
	switch (pacage) {
		case 'A':

			pacagePrice = 8; 
			jamNumber = 2; 
			jamPrice = 5;
			std::cout << "How manny jams you want? \n";
			std::cin >> additionalJam;
			totalPrice =   additionalJams(additionalJam, jamNumber)*jamPrice + pacagePrice;
			std::cout << "You owe " << totalPrice << "$";
			
		case 'B':

			pacagePrice = 12;
			jamNumber = 4;
			jamPrice = 4;

			std::cin >> additionalJam;
			totalPrice = additionalJams(additionalJam, jamNumber) * jamPrice + pacagePrice;
			std::cout << "You owe " << totalPrice << "$";
		case 'C':
			pacagePrice = 15;
			jamNumber = 6;
			jamPrice = 3;

			std::cin >> additionalJam;
			totalPrice = additionalJams(additionalJam, jamNumber) * jamPrice + pacagePrice;
			std::cout << "You owe " << totalPrice << "$";
		default: 
			std::cout << "Wrong input \n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			goto AGAIN;
	}
	return 0; 
}