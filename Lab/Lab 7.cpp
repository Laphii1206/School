//question 2
#include <iostream>
using namespace std;

int main(){
    int data = 2;
    while (data <= 20){
    cout << data << endl;
    data+=2 ;
    }
    
    return 0;
}

//question 3 
#include <iostream>
using namespace std;

int main(){
    int value;
    cout << "Insert a number" << endl;
    cin >> value;
    while (value <= 0){
    cout << "Given number is not positive" << endl;
    cin >> value;
    }
    if (value % 2 == 0)
    cout << value << " is a even number" << endl;
    else 
    cout << value << " is a odd number"  << endl;
    return 0;
}

//question 4 
#include <iostream>
using namespace std;

int main() {
	double average, num, total;
	int counter = 0;
	cout << "Input any amount of number, Input 0 to start calculating" << endl;
	do {		
		cin >> num;
		total = total + num;
			counter++;
	} while (num != 0); 
	counter = counter - 1;
	average = total / counter;
	cout << "The total is " << total << endl <<
	 << "The average is " << average << endl;
	return 0;
}


//question 5
#include <iostream>
using namespace std;

int main() {
	double saving,
		   balance,
		   total,
		yearInterest = 0.03;
	double year = 0;
	cout << "Interest for every year" << endl;
	do {
		saving = saving + 200 * 12;
		year++;
		balance = saving + (saving * yearInterest);
		total = total + balance;
		cout << "Year " << year << ": $" << balance << endl;
	} while (year < 10);
		cout << "10 Years Total Amount is $" << total << endl;
	return 0;
}