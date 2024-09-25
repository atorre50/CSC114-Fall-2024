#include <iostream>

using namespace std;

int main () {
	int first_integer;
	int second_integer;
	int sum;
	
	//the 1st line prompts the user for the 1st integer
	cout << "Enter your 1st integer ";
	cin >> first_integer;
	
	cout << "Enter your 2nd integer ";
	cin >> second_integer;
	
	cout << "\nValue of first_integer " << first_integer << endl;
	cout << "Value of second_integer " << second_integer << endl;
	
	sum = first_integer + second_integer;
	
	cout << "The sum of your two integers is: " << sum;
}	
