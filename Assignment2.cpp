#include <iostream>
using namespace std;

double doOpenAccount();
double doDeposit();
double doWithdraw();
void showBalance();
void menuSelection();
void welcome();
void closeSystem();

double balance;
char confirmation, confirmation2;

int main() {
welcome();
doOpenAccount();
menuSelection();
closeSystem();
return 0;
}

void welcome() {
cout << "Welcome to The Bank System" << endl << endl;
}

void closeSystem() {
cout << "Thank you for using the system.";
}

double doOpenAccount() {
cout << "Enter the deposit amount to open saving account (minimum is $250): ";
cin >> balance;
while (balance < 250) {
cout << "The minimum deposit for a saving account is $250" << endl
<< "Enter the deposit amount to open saving account (minimum is $250): ";
cin >> balance;
}
cout << endl;
return balance;
}

double doDeposit() {
double deposit;
do { do {
cout << endl << "How much would you like to deposit? ";
cin >> deposit;
	
if (deposit < 0) {
cout << "Invalid input. Deposit must be positive." << endl
<< "Transaction declined." << endl;
confirmation = 'N';
}
	
else {
cout << "Confirm to deposit $" << deposit << "? (Y/N): ";
cin >> confirmation;
confirmation = toupper(confirmation);
}
	
} while (confirmation != 'Y');
    
cout << endl << "Transaction accepted." << endl
<< "Amount deposited: $" << deposit << endl;
balance += deposit;
cout << "Balance in the Savings account: $" << balance << endl;
cout << endl << "Would you like to make another deposit? (Y/N): ";
cin >> confirmation2;
confirmation2 = toupper(confirmation2);
    
} while (confirmation2 == 'Y');
	
return balance;
}

double doWithdraw() {
double withdraw;
do { do {
cout << endl << "How much do you like to withdraw? ";
cin >> withdraw;
	
if (withdraw > balance) {
cout << "Insufficient money in the account to withdraw $" <<
withdraw << " Account balance is $" << balance << endl
<< "Transaction declined." << endl;
confirmation = 'N';
}
	
else if (withdraw < 0) {
cout << "Invalid input. Withdrawal must be positive." << endl
<< "Transaction declined. " << endl;
confirmation = 'N';
}
	
else {
cout << "Confirmation to withdraw $" << withdraw << "? (Y/N): ";
cin >> confirmation;
confirmation = toupper(confirmation);
} 
} while (confirmation != 'Y');
cout << endl << "Transaction accepted." << endl
<< "Amount withdrawn: $" << withdraw << endl;
balance -= withdraw;
cout << "Balance in the Savings account: $" << balance << endl;
cout << endl << "Would you like to make another withdraw? (Y/N): ";
cin >> confirmation2;
confirmation2 = toupper(confirmation2);
} while (confirmation2 == 'Y');
return balance;
}

void showBalance() {
cout << endl << "Balance in the Savings account: $" << balance << endl;
}

void menuSelection() {
int selection;
do {
cout << "1. Deposit money" << endl
<< "2. Withdraw money" << endl
<< "3. Check balance" << endl
<< "Selection your option (1 - 3, 0 to quit): ";
cin >> selection;
switch (selection) {
case 1: balance = doDeposit(); break;
case 2: balance = doWithdraw(); break;
case 3: showBalance(); break;
case 0: break;
default: cout << endl << "Invalid options" << endl; break;
}
cout << endl;
} while (selection != 0); }
