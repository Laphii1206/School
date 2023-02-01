#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

/*
To do list:
- ask question to grab data
- make function
- create calculation
- output total
*/

double getDiscount(double totalItem) {
	if (totalItem >= 3000) return .2;
	if (totalItem >= 1500) return .15;
	if (totalItem >= 800) return .10;
	if (totalItem >= 400) return .05;
	return 0;
}

double getShippingFees(double totalWeight) {
	if (totalWeight >= 10.1) return 6.2;
	if (totalWeight >= 1.1) return 6.5;
	if (totalWeight >= 1) return 10;
	return 0;
}

int main() {
	double totalItem, totalWeight, cost = 0;
	char xPay, voucher = 'N';
	//ask questions
	cout << "Enter the total amount of all items" << endl;
	cin >> totalItem;
	cout << "Enter the total weight (kg) of all items" << endl;
	cin >> totalWeight;
	cout << "Are you paying with xPay? (Y/N)" << endl;
	cin >> xPay;
	xPay = toupper(xPay);

	if (xPay == 'N') {
		cout << "Do you have free shipping voucher? (Y/N)" << endl;
		cin >> voucher;
		voucher = toupper(voucher);
	}
	if (xPay == 'Y' || voucher == 'Y') {
		cost = totalItem - totalItem * getDiscount(totalItem);
	}
	else if (xPay == 'N' && voucher == 'N') {
		if (totalWeight <= 1) {
			cost = totalItem - totalItem * getDiscount(totalItem) + getShippingFees(totalWeight);
		}
		else {
			cost = totalItem - totalItem * getDiscount(totalItem) + totalWeight * getShippingFees(totalWeight);
		}
	}
	cout << "The Total Amount is RM" << fixed << setprecision(2) << cost << endl;
	return 0;
}
// do a better result output
