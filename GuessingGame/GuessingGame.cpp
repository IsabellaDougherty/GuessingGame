/* Guessing Game AKA High Low*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	srand(time(NULL));
	
	//---------------------------- Variable Declaration ----------------------------
	int random_number;
	int guessed_number;
	int guesses = 0;
	int cont;
	bool guessed = false;
	bool acceptable = false;
	//---------------------------------- Game Loop ----------------------------------
	do {
		random_number = 1 + rand() % 100;
		do {
			guessed = false;
			acceptable = false;
			guesses = 0;
			do {
				cout << "Enter your guess of any number from 1 to 100: ";
				cin >> guessed_number;
				if (guessed_number == random_number) {
					cout << "Correct! You win!!!" << endl;
					acceptable = true;
					guessed = true;
				}
				else if (guessed_number > random_number && guessed_number <= 100) {
					cout << "You're too high!" << endl;
					acceptable = true;
				}
				else if (guessed_number < random_number && guessed_number >= 1) {
					cout << "You're too low!" << endl;
					acceptable = true;
				}
				else if (guessed_number > 100 || guessed_number < 1) {
					cout << "This is not an acceptable input. Please enter a number less than 101 AND more then 0: ";
				}
			} while (acceptable = false);
			guesses += 1;
		} while (guessed == false);
		cout << "This took you " << guesses << " to get the correct number.\nPlay again?" << endl;
		cout << "Enter '0' for 'Yes' and '1' for 'No': ";
		cin >> cont;
	} while (cont == 0);
	//------------------------------- Exit Gracefully -------------------------------
	cout << "Thank you for playing!" << endl;
	cin.ignore();
	cout << "\nPress enter to quit.\n";
	cin.ignore();
	return 0;
}