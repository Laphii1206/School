#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

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
	if (totalWeight <= 1) return 10;
	return 0;
}

int main() {
	double totalItem, totalWeight, cost = 0;
	char xPay, voucher = 'N';
	//ask questions
	cout << "Enter the total amount of all items: ";
	cin >> totalItem;
	cout << "Enter the total weight (kg) of all items: ";
	cin >> totalWeight;
	cout << "Are you paying with xPay? (Y/N): ";
	cin >> xPay;
	xPay = toupper(xPay);

	if (xPay == 'N') {
		cout << "Do you have free shipping voucher? (Y/N): ";
		cin >> voucher;
		voucher = toupper(voucher);
	}
	if (xPay == 'Y' || voucher == 'Y') {
		cost = totalItem - (totalItem * getDiscount(totalItem));
	}
	else if (xPay == 'N' && voucher == 'N') {
		if (totalWeight <= 1) {
			cost = totalItem - totalItem * getDiscount(totalItem) + getShippingFees(totalWeight);
		}
		else {
			cost = totalItem - totalItem * getDiscount(totalItem) + totalWeight * getShippingFees(totalWeight);
		}
	}
	cout << endl << "Order Total \t\t" << totalItem << endl
		<< "Discount " << getDiscount(totalItem) * 100 << "%\t\t" << totalItem * getDiscount(totalItem) << endl
		<< "---------------------------------" << endl
		<< "Order Total after disc \t" << totalItem - totalItem * getDiscount(totalItem) << endl;

	if (xPay == 'Y' || voucher == 'Y')
		cout << "Shipping Fee \t\t 0" << endl;
	else if (totalWeight <= 1)
		cout << "Shipping Fee \t\t" << "10" << endl;
	else
		cout << "Shipping Fee \t\t" << totalWeight * getShippingFees(totalWeight) <<endl;

	cout << "---------------------------------" << endl
		<< "Total Payment \t\t" << fixed << setprecision(2) << cost << endl
		<< "=================================";
	return 0;
}
