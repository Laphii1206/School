#include <iostream>
using namespace std;

int main() {
	int selection, num1, num2, answer;
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
