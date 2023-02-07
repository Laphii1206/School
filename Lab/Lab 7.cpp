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
    while (value < 0){
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
	cout << "Insert number to calculate average , press 0 to start calculating" << endl;
	do {		
		cin >> num;
		total = total + num;
		if (num != 0)
			counter++;
		else break;
	} while (num != 0); 
	average = total / counter;
	cout << "The average is " << average << endl;
	return 0;
}


//question 5
#include <iostream>
using namespace std;

int main() {
	double balance = 200,
		yearInterest = 0.3;
	int counter = 0;
	cout << "Bank Balance $200" << endl
		<< "Interest for every year" << endl;
	do {
		counter++;
		balance = balance + (balance * yearInterest);
		cout << "Year " << counter << ": $" << balance << endl;
	} while (counter < 10);
	return 0;
}
