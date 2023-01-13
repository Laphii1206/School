#include <iostream>
#include <string>
using namespace std;

/*
The program reads the following data: 
• the total amount of all items 
• the total weight (kg) of all items 
• if the customer pays by xPay or has free shipping voucher 
  */

/*
Order total   765.45 
Discount 5%       38.27 
------------------------------------------------ 
Order total after disc.  727.18 
Shipping Fee                       0 
------------------------------------------------- 
Total payment   727.18  
============================== 
*/

double getDiscount(double totalItem) {
	if (totalItem >= 3000) return .2;
	if (totalItem >= 1500) return .15;
	if (totalItem >= 800) return .10;
	if (totalItem >= 400) return .05;
	return 0;
}
double discountRate = getDiscount(1000);

double getShippingFees(double totalWeight) {
	if (totalWeight >= 1) return 10;
	if (totalWeight >= 1.1) return 6.5;
	if (totalWeight >= 10.1) return 6.2;
	return 0;
}
double shippingFees = getShippingFees(1000);

int main() {
	double totalItem;
	double totalWeight;
	char xPay;
	char voucher;
	cout << "Enter the total amount of all items" << endl;
	cin >> totalItem;
	cout << "\nEnter the total weight (kg) of all items" << endl ;
	cin >> totalWeight;
	cout << "\nAre you paying with xPay? (Y/N)" << endl;
	cin >> xPay;	
	if (xPay == 'Y'){}
	else if (xPay == 'N') {
		cout << "Do you have free shipping voucher? (Y/N)" << endl;
	}
	cin >> voucher;
	double costY = totalItem - (totalItem * discountRate);
	double costN = totalItem - (totalItem * discountRate) + (totalWeight * shippingFees);
	if (xPay || voucher == 'Y')
	{
		cout << costY;
	}
	else if (xPay || voucher == 'N')
	{
		cout << costN;
	}
	return 0;
	}