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
	cout<<"\nAre you a student?" << isStudent; 
	return 0;
  }

//what if statement
#include <iostream>
using namespace std;
int main() {
	int age;
	cout << "How old are you? ";
	cin >> age;
	if(age>=21)
		cout << "You are an adult.";
	else
		cout << "You are not an adult.";
	return 0;
}

//math
int main() {
	int totalWeight=178, totalHeight,weight10=50;
	int a = 5, b=10;
	a++; //a=a+1	
	a = a + 5; //a+=5;
	b = b - 6;
	totalWeight = totalWeight + weight10;
	totalWeight +=  weight10;
	cout << b << endl;
	return 0;
}
