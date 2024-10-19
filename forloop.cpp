#include <iostream>

int main() {
using namespace std;
	int sum = 0; //we need to initialize this or else we'll get multiple outputs	
	
	cout << "Here are the numbers 1-10" << endl;
	cout << "1 2 3 4 5 6 7 8 9 10" << endl;
	
//the <= 10 means to include 10, otherwise the loop would stop at 10	
	
	for (int number = 1; number <= 10; number++) {
	sum += number; // this adds each number to sum
	}
	
/*make sure the output statement is OUTSIDE the 
for loop or else it will add every single # from 1-10
by itself or something
*/
	
	cout << "The sum of these numbers is, " << sum;

}
