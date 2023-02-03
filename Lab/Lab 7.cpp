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
}
#include <iostream>
using namespace std;

int main(){
double balance;
int selection;
cout << "Welcome to Laphii Bank System" << endl;
cout << "\nEnter the deposit amount to open saving account (minimum is $250)" << endl;
cin >> balance;
while (balance <250){
cout << "The minimum deposit for a saving account is $250" <<endl
cout << "\nEnter the deposit amount to open saving account (minimum is $250)" <<endl;
cin >> balance;
}
do {
cout << "1. Deposit money \n2. Withdraw money \n3. Check balance" << endl
cout << "Selection your option (1 - 3, 0 to quit): ";
cin >> selection;
switch (selection){
case 1;
case 2;
case 3: cout << "Balance in the saving account: $" << balance << endl;
default: cout << "Invalid options";
} }
while (selection = 1,2,3);



return 0;
}