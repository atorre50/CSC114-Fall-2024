#include <iostream>

using namespace std;

int main () {
//Declaring the variable (ingredients)
	int amount_of_loaves;
	int flour = 350;
	double salt = 24.5;
	int yeast = 33;
	int water = 120;
	int multiplication;
	
	cout << "\nHow many loaves of bread would you like to make? ";
	cin >> amount_of_loaves;
	
	cout << "In order to make amount_of_loaves loaves of bread, you'll need, " << endl;
	//making this multiply & print
	multiplication = flour * amount_of_loaves;
	cout << multiplication << " grams of flour." << endl;
	
	multiplication = salt * amount_of_loaves;
	cout << multiplication << " grams of salt." << endl;
	
	multiplication = yeast * amount_of_loaves;
	cout << multiplication << " grams of yeast." << endl;
	
	multiplication = water * amount_of_loaves;
	cout << multiplication << " grams of water." << endl;
	
}
