//1
#include <iostream>
using namespace std;

int main()
{
    double balance,interest,total;
    cout << "Enter Balance: ";
    cin >> balance;
    cout << "Enter interest: ";
    cin >> interest;
    total = balance + balance * interest;
    cout << "Balace at the end of the year with interest is " << total;
    
    return 0;
}
