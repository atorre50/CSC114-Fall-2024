#include <iostream>

using namespace std;

//my own functions
int sum_of (int num1, int num2) {
	return num1 + num2;
}

int product_of (int num1, int num2) {
	return num1 * num2;
}

//I got stuck here so I had to look this one up, used stack overflow
pair<double, double> circum_area_of(double radius) {
	double area = 3.14 * radius * radius;
	double circumference = 2 * 3.14 * radius;
	return make_pair(area, circumference);
	
	/*	What I wrote initially:
	cout << "type the radius of a circle" << endl;
	cin >> radius;
	
		circumference = 3.14 * radius * radius;
		area = 2 * 3.14 * radius;
	cout << "Area:  " << area << endl;
	cout << "Circumference:  " << circumference << endl;*/
}

int max_of (int num1, int num2, int num3) {
	 return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3); // relied on other sources
	 
/*if (num1 > num2 && num1 > num3){
	cout << "maximum: " << num1 << endl;
	}
else if (num2 > num1 && num2 > num3) {
	cout << "maximum: " << num2 << endl;
	}
else {
	cout << "maximum: " << num3 << endl;
	}*/	
}

int min_of (int num1, int num2, int num3) {
	return (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
	
/*if (num1 < num2 && num1 < num3){
	cout << "min: " << num1 << endl;
	}
else if (num2 < num1 && num2 < num3) {
	cout << "min: " << num2 << endl;
	}
else {
	cout << "min: " << num3 << endl;
	}*/	
}

int even_or_odd (int num) {
	return num % 2 == 0;
	
	/* if (num % 2 =5= 0) {
		cout << "even!" << endl;
	} 
	else {
	cout << "odd!" << endl;
	} */
}

bool voting (int age) {
	return age >= 18;
}


int main () {
	int numA, numB, numC, age, num;
	double radius;


//sum
	cout << "type 2 numbers" << endl;
	cin >> numA;
	cin >> numB;
	cout << "The sum of those #s is: " << sum_of (numA, numB) << endl;


//product
	cout << "type 2 numbers" << endl;
	cin >> numA;
	cin >> numB;
	cout << "The product of those #s is: " << product_of (numA, numB) << endl;

//circumference & area (again, I heavily relied on other sources for this one)
	cout << "Type the radius of a circle: ";
	cin >> radius;
	pair<double, double> result = circum_area_of(radius);
	cout << "Area: " << result.first << ", Circumference: " << result.second << endl;
	
//max of 3 #s
	cout << "type 3 numbers" << endl;
	cin >> numA;
	cin >> numB;
	cin >> numC;
	cout << "The maximum is: " << max_of(numA, numB, numC) << endl;

//min of 3 #s
	cout << "type 3 numbers" << endl;
	cin >> numA;
	cin >> numB;
	cin >> numC;
	cout << "The minimum is: " << min_of(numA, numB, numC) << endl;

// even or odd
	cout << "Type a # to determine if even or odd" << endl;
	cin >> num;
	
	//relied on other sources
	cout << (even_or_odd(num) ? "Even" : "Odd") << endl;
	
//voting
	cout << "Are you eligible to vote? Type ur age:" << endl;
	cin >> age;
	cout << (voting(age) ? "You are eligible to vote!" : "You are not eligible to vote yet.") << endl; // somewhat relied on other sources
}

