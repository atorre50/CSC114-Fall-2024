#include <iostream>
int main () {
using namespace std;
	string user_answer;	
	
	cout << "Let's play Rock Paper Scissors!\n" << endl;
	
/*The while is what makes it loop but make sure to 
add breaks and tell the program when to continue
*/
	
while (true) {
	cout << "Enter an answer or type 'exit' to quit: ";
	cin >> user_answer;
	
	//break means to stop the program
	if (user_answer == "exit") {
		break;
	}
	
	else if (user_answer == "paper" || user_answer == "Paper") {
		cout << "Scissors, I win." << endl;
		continue;
	}
	
	else if (user_answer == "scissors" || user_answer == "Scissors") {
		cout << "Rock, I win." << endl;
		continue;
	}
	
	else if (user_answer == "rock" || user_answer == "Rock") {
		cout << "Paper, I win." << endl;
		continue;
	}
	
	else {
		cout << "Invalid Entry, Try Again" << endl;
		continue;
	}	

}

}
