#include <iostream>

int main () {
using namespace std;

	int year;
	
	cout << "Type in a year to calculate if it is a leap year\n";
	cin >> year;
	 
	if (year % 4 == 0 && year % 100 != 0  || year % 400 == 0) {
		cout << year << " is a leap year" << endl;
	}
		
		
	else {
		cout << year << " is not a leap year" << endl;
	}
}
