#include <iostream>
using namespace std;

int main(){
int selection;
	//cout << "Selection of public transport: " << endl
	//	<< "1. Bus" << endl << "2. Train" <<endl<< "3. Grab" << endl
	//	<< "Enter your selection (1/2/3) ->";
	cout << "Selection of public transport: " 
		<< "\n1. Bus\n2. Train\n3.Grab"
		<< "\nEnter your selection (1/2/3) ->";
	cin >> selection;
	cout << "Transport->";
	if (selection == 1)
		cout << "Bus";
	else if (selection == 2)
		cout << "Train";
	else if (selection == 3)
		cout << "Grab";
	else cout << "wrong choice";
  return 0;
}

switch (selection) {
	case 1:cout << "Bus";	break;
	case 2:cout << "Train";	break;
	case 3:cout << "Grab";	break;
	default:cout << "Wrong choice.";
	}

switch (selection) { 
	case 1: cout << "Bus...";
	case 2:cout << "Train...";	break;
	case 3:cout << "Grab...";	
	default:cout << "Wrong choice...";
	}

//if selection is 1, output is Bus and train
//if selection is 2, output is train
//if selection is 3, output is Grab and wrong choice
//if selection is 4, output is wrong choice
switch (selection) {
	case 'a':
	case 'A':cout << "Bus...";	break;
	case 'B':
	case 'b':cout << "Train...";	break;
	case 'C':
	case 'c':cout << "Grab..."; break;
	//default:cout << "Wrong choice...";
	}
