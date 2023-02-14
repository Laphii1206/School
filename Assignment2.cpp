#include <iostream>
using namespace std;

double doOpenAccount(double balance) {
	while (balance < 250) {
		cout << "The minimum deposit for a saving account is $250" << endl
			<< "Enter the deposit amount to open saving account (minimum is $250): ";
		cin >> balance;
	}
	return balance;
}

double doDeposit(double deposit, double balance) {
	if (deposit < 0) {
		cout << "Invalid input. Deposit must be positive." << endl
			<< "Transaction declined." << endl << endl;
	}
	else {
		cout << "Transaction accepted." << endl
			<< "Amount deposited: $" << deposit << endl;
		balance = deposit + balance;
		cout << "Balance in the Savings account: $" << balance << endl << endl;
	}
	return balance;
}

double doWithdraw(double withdraw, double balance) {
	if (withdraw > balance) {
		cout << "Insufficient money in the account to withdraw $" << withdraw << " Account balance is $" << balance << endl
			<< "Transaction declined." << endl << endl;
	}
	else if (withdraw < 0) {
		cout << "Invalid input. Withdrawal must be positive." << endl
			<< "Transaction declined. " << endl << endl;
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
	cout << "Balance in the Savings account: $" << balance <<endl <<endl;
}

int main() {
	double balance;
	int selection;
	double deposit, withdraw;
	cout << "Welcome to The Bank System" << endl << endl;
	cout << "Enter the deposit amount to open saving account (minimum is $250): ";
	cin >> balance;
	doOpenAccount(balance);
	cout << endl;
	do {
		cout << "1. Deposit money" << endl
			<< "2. Withdraw money" << endl
			<< "3. Check balance" << endl
			<< "Selection your option (1 - 3, 0 to quit): ";
		cin >> selection;
		switch (selection) {
		case 1: {
			cout << endl << "How much would you like to deposit? ";
			cin >> deposit;
			balance = doDeposit(deposit, balance);} break;
		case 2: {
			cout << endl << "How much do you like to withdraw? ";
			cin >> withdraw;
			balance = doWithdraw(withdraw, balance);
			cout << endl;} break;
		case 3: 
			cout << endl;
			showBalance(balance); break;
		case 0: cout << endl << "Thank you for using the system."; break;
		default: cout << endl << "Invalid options" << endl; break;
		}
	} while (selection != 0);
	return 0;
}
