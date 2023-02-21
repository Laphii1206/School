//Question 1
#include <iostream>
using namespace std;

double celcius, farenheit;

void convert() {
    farenheit = (celcius * 9 / 5) + 32;
	cout << "Current Temperature is " << celcius << "C or " << farenheit << "F " << endl;
}

int main() {
    cout << "pls input your celcius -> ";
    cin >> celcius;
    convert();
	return 0;
}

//Question 2
#include <iostream>
using namespace std;

double height, weight, bodyMass;

void calBodyMass() {
	bodyMass = weight / (height * height);
	cout << "Your Body MASS Index is " << bodyMass << endl;
}

int main() {
	cout << "Insert your height in (m)" << endl;
	cin >> height;
	cout << "Insert your weight in (kg)" << endl;
	cin >> weight;
	calBodyMass();
	return 0;
}

//Question 3
#include <iostream>
using namespace std;

int i,num;

void doFactor() {
	cout << "The Factor of " << i << " is ";
	for (num = 1;num <= i;num++)
		if (i % num == 0) {
			cout << num << " ";
		}
}
int main(){
	cout << "Enter a positive integer: ";
		cin >> i;
		while (i < 0) {
		cout << "This is a negative integer" << endl << endl;
		cout << "Enter a positive integer: ";
		cin >> i;
	}
		doFactor();
	return 0;
}

//Question 4
#include <iostream>
using namespace std;

int x, y,sum =0;
// sum has to initialize to 0

double doSum() {
    if (x < y)
	for (x; x <= y;x++)
		sum = sum + x;
		else
		for (y; y <= x;y++)
		sum = sum + y;	
	return sum;
}

int main() {
		cout << "Enter two positive integer: ";
		cin >> x >> y;
		while (x < 0 || y < 0) {
		cout << "One of the integer is negative integer" << endl << endl;
		cout << "Enter two positive integer: ";
		cin >> x >> y;
	}
		sum = doSum();
		if (y < x)
		cout << "The sum of all the integers from x to y is " << sum;
		else 
		cout <<  "The sum of all the integers from y to x is " << sum;
		return 0;
}

//Question 5
#include <iostream>
using namespace std;

int i;

void isPositive() {
	if (i < 0)
		cout << "the integer is negative";
	else 
		cout << "the integer is positive";
}

int main() {
	cout << "Enter a number: ";
	cin >> i;
	isPositive();
		return 0;
}

//Question 6
#include <iostream>
using namespace std;

int x, y;

void doFactor() {
	if (y % x == 0)
		cout << "y is the factor of x";
	else cout << "y is not the factor of x";
}

int main() {
	cout << "Enter two intergers: ";
		cin >> x >> y;
		doFactor();
		return 0;
}

//Question 7
#include <iostream>
using namespace std;

int score;

void grading() {
	cout << endl;
	if (score >= 80 && score <= 100) cout << "The grade for " << score << "% is A";
	if (score >= 66 && score <=79) cout << "The grade for " << score << "% is B";
	if (score >= 50 && score <= 65) cout << "The grade for " << score << "% is C";
	if (score >= 0 && score <= 49) cout << "The grade for " << score << "% is F";

}

int main() {
	cout << "Enter a score: ";
		cin >> score;
		grading();
		return 0;
}

//Question 8
#include <iostream>
using namespace std;

double m,inch;

void convert() {
	inch = m / 39.37;
		cout << m << "m convert to inches is " << inch;
}



int main() {
	cout << "Enter a inches: ";
		cin >> m;
		convert();
		return 0;
}

//Question 9
#include <iostream>
using namespace std;

double cm,inch;

void convert() {
	inch = cm / 2.54;
		cout << cm << " convert to inches is " << inch;
}

int main() {
	cout << "Enter a inches: ";
		cin >> cm;
		convert();
		return 0;
}
