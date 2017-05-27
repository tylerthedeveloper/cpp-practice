#include <iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter a number between 1 and 100" << endl;;
	cin >> num;
	
	bool b = true;
	int min = 0,  max = 100, guess = max / 2;	

	do {
		if (num == guess) {
			b = false;
			break;
		}

		cout << "Is your number greater or less than: " <<  guess << endl;	
		cout << "Type g for greater and l for less than " << endl;
		string dir;
		cin >> dir;		
		if (dir == "g") { 
			min  = guess;
		}
		else {
			max = guess;
		}
		guess = (rand()%(max-min + 1)) + min;
	} while (b);


	cout << "Your number is: " << num;
}



