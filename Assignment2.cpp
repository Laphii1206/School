#include <iostream>
using namespace std;

double doOpenAccount();
double doDeposit();
double doWithdraw();
void showBalance();
void menuSelection();

double doOpenAccount() {
    double balance;
    cout << "Enter the deposit amount to open saving account (minimum is $250): ";
    cin >> balance;
	while (balance < 250) {
    cout << "The minimum deposit for a saving account is $250" << endl
	     << "Enter the deposit amount to open saving account (minimum is $250): ";
		cin >> balance;
	}
	return balance;
}

double doDeposit(double balance) {
    double deposit;
    cout << "How much would you like to deposit? ";
	cin >> deposit;
	if (deposit < 0) {
		cout << "Invalid input. Deposit must be positive." << endl
			<< "Transaction declined." << endl;
	}
	else {
		cout << "Transaction accepted." << endl
			<< "Amount deposited: $" << deposit << endl;
		balance = deposit + balance;
		cout << "Balance in the Savings account: $" << balance << endl;
	}
	return balance;
}

double doWithdraw(double balance) {
    double withdraw;
    	cout << "How much do you like to withdraw? ";
		cin >> withdraw;
	if (withdraw > balance) {
		cout << "Insufficient money in the account to withdraw $" << withdraw << " Account balance is $" << balance << endl
			<< "Transaction declined." << endl;
	}
	else if (withdraw < 0) {
		cout << "Invalid input. Withdrawal must be positive." << endl
			<< "Transaction declined. " << endl;
	}
	else {
		cout << "Transaction accepted." << endl
			<< "Amount withdrawn: $" << withdraw << endl;
		balance = balance - withdraw;
	}
	cout << "Balance in the Savings account: $" << balance <<endl;
	return balance;
}

void showBalance(double balance) {
	cout << "Balance in the Savings account: $" << balance <<endl ;
}

void menuSelection(double balance){
    int selection;
    do {
		cout << "1. Deposit money" << endl
			<< "2. Withdraw money" << endl
			<< "3. Check balance" << endl
			<< "Selection your option (1 - 3, 0 to quit): ";
		cin >> selection;
		cout << endl;
		switch (selection) {
		case 1: balance = doDeposit(balance); break;
		case 2: balance = doWithdraw(balance); break;
		case 3: showBalance(balance); break;
		case 0: cout << "Thank you for using the system."; break;
		default: cout << "Invalid options" << endl; break;
		}
		cout << endl;
	} while (selection != 0);
}

int main() {
	double balance;
	int selection;
	cout << "Welcome to The Bank System" << endl << endl;
	balance = doOpenAccount();
	cout << endl;
	menuSelection(balance);
	return 0;
}
