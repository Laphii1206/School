//Question 1
#include <iostream>
using namespace std;

int main() {
	int x,y,z;
	for (x = 1;x <= 12;x++) {
		cout << endl;
		for (y = 1;y <= 12;y++)
		
		cout << x << " * " << y << " = " << x*y<< endl;
	}
	return 0;
}

//Question 2 
#include <iostream>
using namespace std;

int main() {
	int rounds, eachRounds,
		counter, counterRounds;
	double num, total;
	cout << "How many rounds? ";
		cin >> rounds;
		cout << "How many numbers to enter each round? ";
			cin >> eachRounds;
			cout << endl;
			for (counter = 1;counter <= rounds;counter++) {
				cout << "Round " << counter << endl << endl;
				total = 0;
				for (counterRounds = 1;counterRounds <= eachRounds;counterRounds++) {
					cout << "Enter a number: ";
					cin >> num;
					total = total + num;
				}
				cout << endl << "Total is " << total << endl << endl;
			}
	return 0;
}

//Question 4
#include <iostream>
using namespace std;

int main() {
	double deposit,
		interest=0.036;
	int month=4,
		year=2021;
	cout << "How much is the deposit amount? ";
	cin >> deposit;
	cout << endl;
	for (year;year <= 2025;year++) {
		cout << "Year " << year << endl;
		cout << "Month \t" << "Balance ($)" << endl;
		for (month=4;month <= 12;month += 4) {
			deposit = deposit + deposit * interest;
			cout<< month << "\t" << deposit << endl;
		}
		cout << endl;
	}
	return 0;
}
