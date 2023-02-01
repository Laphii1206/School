//Question 1
#include <iostream>
using namespace std;

int main() {
	int selection, num1, num2;
	cout << "Enter 2 number seperate by space" << endl;
	cin >> num1 >> num2;
	cout << "Selection of Operator"
		<< "\n1.Add \n2.Subtract \n3.Multiply \n4.Divide" << endl
		<< "Enter your selection (1/2/3/4) ->" << endl;
	cin >> selection;
	switch (selection) {
	case 1: cout << "The operation result is " << num1 << " + " << num2 << " = " << num1 + num2; break;
	case 2: cout << "The operation result is " << num1 << " - " << num2 << " = " << num1 - num2; break;
	case 3: cout << "The operation result is " << num1 << " * " << num2 << " = " << num1 * num2; break;
	case 4: cout << "The operation result is " << num1 << " / " << num2 << " = " << num1 / num2; break;
	default: cout << "No such choice...";
	}
	return 0;
}

//Question 2
#include <iostream>
using namespace std;

int main() {
	int selection;
	cout << "Select a number between 1 to 5" << endl;
	cin >> selection;
	switch (selection) {
	case 1: cout << "Congratulation on winning Waffle Maker" << endl; break;
	case 2: cout << "Congratulation on winning Hair dryer" << endl; break;
	case 3: cout << "Congratulation on winning Toaster" << endl; break;
	case 4: cout << "Congratulation on winning Wireless headset" << endl; break;
	case 5: cout << "Congratulation on winning RM 100 cash voucher" << endl; break;
	default: cout << "No such choice...";
	}
	return 0;
}

//Question 3
#include <iostream>
using namespace std;

int main() {
	int selection,menu,amount;
	double price,totalPrice;
	cout << "Select a ice-cream from the menu" << endl
		<< "1. Singlecone 12.5 \n2. Double cone 17.9 \n3. Triple cone 20.9 \n4. Banana Split 27.9" << endl;
	cin >> selection;
	cout << "Insert the amount of quantity" << endl;
	cin >> amount;
	switch (selection) {
	case 1: price = 12.5; break;
	case 2: price = 17.9; break;
	case 3: price = 20.9; break;
	case 4: price = 27.9; break;
	default: cout << "No such choice...";
	}
	totalPrice = price * amount;
	cout << "Total Price is RM" << totalPrice;
	return 0;
}

//Question 4
#include <iostream>
using namespace std;

int main() {
	char letter;
	cout << "Insert a letter" << endl;
	cin >> letter;
	switch (letter) {
	case 'a': case 'A':
	case 'e': case 'E':
	case 'i': case 'I':
	case 'o': case 'O':
	case 'u': case 'U':
		cout << letter << " is a vowel" << endl; break;
	default: cout << letter << " is a consonant" << endl;
	}
	return 0;
}

//Question 5
#include <iostream>
using namespace std;

int main() {
	int selection;
	double r;
	double pi = 3.14;
	cout << "Enter a radius" << endl;
	cin >> r;
	cout << "Select what to calculate" << endl
		<< "1. Perimeter \n2. Area \n3. Volume" << endl;
	cin >> selection;
	switch (selection) {
	case 1: cout << "The Perimeter is " << 2 * r * pi << endl; break;
	case 2: cout << "The Area is " << pi * (r*r); break;
	case 3: cout << "The Volume is " << 4/3 * pi * (r*r*r); break;
	default: cout << "No such choice...";
	}
	return 0;
}
