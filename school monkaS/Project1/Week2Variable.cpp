//program 6 - variable - computer memory (store data) 
//syntax to create a variable:
//type variableName
#include <iostream>
using namespace std;

  int main(){
	int age=18; //integer declaration and initialization
	age = age + 2; //assignment + reading 
	cout << "Age = " << age;
	char letter; //character
	letter = 'w'; //character must be in single quote 
	cout << "\nLetter is " << letter;
	float pocketMoney=727.72; //real number/floating point number
	double balance=1000.0000; //real number - wider range than float 
	bool isStudent=1; // yes/no (1 = true) (0 = false) anything in bool that is not 0 means true/1
	cout<<"Are you a student?" << isStudent; 
	return 0;
  }
