#include <iostream>
#include <string>
using namespace std;

int main() {
	int array[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n;
	
	cout << "Type in any number from 1-10" << endl;
	cin >> n;
	
	for (int i = 0; i < 10; i += n) {
		cout << i[array] << endl;
	}


}
