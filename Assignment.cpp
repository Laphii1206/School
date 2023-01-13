#include <iostream>
#include <iomanip>
using namespace std;

double getDiscount(double totalItem) {
	if (totalItem >= 3000) return .2;
	if (totalItem >= 1500) return .15;
	if (totalItem >= 800) return .10;
	if (totalItem >= 400) return .05;
	return 0;
}

double getShippingFees(double totalWeight) {
	if (totalWeight >= 1) return 10;
	if (totalWeight >= 1.1) return 6.5;
	if (totalWeight >= 10.1) return 6.2;
	return 0;
}

int main() {
	double totalItem, totalWeight, cost;
	char xPay;
	char voucher;

	//ask questions
	cout << "Enter the total amount of all items" << endl;
	cin >> totalItem;
	cout << "\nEnter the total weight (kg) of all items" << endl;
	cin >> totalWeight;
	cout << "\nAre you paying with xPay? (Y/N)" << endl;
	cin >> xPay;
	//calculation
	if (totalWeight >= 1 && xPay == 'Y') {
		cost = totalItem - totalItem + getDiscount(totalItem);
		cout << "The Total Amount is  " << setprecision(5) << cost;
		return 0;
	}
	else if (xPay == 'Y') {
		cost = totalItem - totalItem * getDiscount(totalItem);
		cout << "The Total Amount is  " << setprecision(5) << cost;
		return 0;
	}
	else if (xPay == 'N') {
		cout << "Do you have free shipping voucher? (Y/N)" << endl;
	}
	cin >> voucher;
	if (xPay || voucher == 'N') {
		cost = totalItem - totalItem * getDiscount(totalItem) + totalWeight * getShippingFees(totalWeight);
		cout << "The Total Amount is  " << setprecision(5) << cost;
		return 0;
	}
	else if (totalWeight >= 1 && xPay || voucher == 'N') {
		cost = totalItem - totalItem * getDiscount(totalItem) + getShippingFees(totalWeight);
		cout << "The Total Amount is  " << setprecision(5) << cost;
		return 0;
	}
	//output Total
	return 0;
}
