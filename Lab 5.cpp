// question 1
#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "Insert A number" << endl;
  cin >> num;
  if (num > 0 )
    cout << num << " is positive.";
  else{
    if (num < 0 )
    cout << num << " is negative.";
  else
    cout << num << " is zero.";
}
  
return 0;
}

//question 2
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Insert 2 number seperate with space" << endl;
    cin >> a >> b;
    if (a > b)
        cout << a << " is bigger than " << b << endl;
    else
        cout << b << " is bigger than " << a << endl;
    return 0;
}

//question 3 
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Insert 3 number seperate with space" << endl;
    cin >> a >> b >> c;
    cout << "The Biggest number is ";
    if (a > b && a > c)
        cout << a << endl;
    else if (b > c )
        cout << b << endl;
    else
        cout << c << endl;
    cout << "The Smallest number is ";
    if (a < b && a < c)
        cout << a << endl;
    else if (b < c)
        cout << b << endl;
    else
        cout << c << endl;
    return 0;
}

//question 4
#include <iostream>
using namespace std;

int main() {
    int hours;
    cout << "insert the parking hours" << endl;
    cin >> hours;
    if (hours <= 2)
        cout << "Parking Fees is RM2" << endl;
    else if (hours >= 3 && hours <= 9)
        cout << "Parking Fees is RM" << hours << endl;
    else
        cout << "Parking Fees is RM10";
    return 0;
}

//question 5
#include <iostream>
using namespace std;

int main() {
    double sales,comission;
    cout << "insert the sales amount" << endl;
    cin >> sales;
    if (sales <= 5000) 
        comission = sales * 0.1;
    else if (sales >= 5001 && sales <= 10000) 
        comission = sales * 0.15;  
    else
        comission = sales * 0.2;  
    cout << "Your comission is " << comission << endl;
    return 0;
}

//question 6
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Insert a number between 1 to 50" << endl;
    cin >> num;
    if (num == (int)num) //convert to integer
    cout << "This is not a integer" << endl;
    else if(num < 1 || num > 50)
        cout << "Invalid range" << endl;
    else if (num % 2 == 0) {
        cout << num << " is an even" << endl;
        if (num >= 10)
            cout << num << " is 2-digit integer" << endl;
        else
            cout << num << " is 1-digit integer" << endl;
    }
    else {
        cout << num << " is an odd" << endl;
        if (num >= 10)
            cout << num << " is 2-digit integer" << endl;
        else
            cout << num << " is 1-digit integer" << endl;
    }
    return 0;
}


//exercise that lecture given
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Insert the user score" << endl;
    cin >> num;
    if (num>=80)
    cout << "Pass and Good" << endl;
    else if (num>=50 && num<=79)
    cout << "Pass" << endl;
    else if (num>=45 && num<=49)
    cout << "Fail and Resit" << endl;
    else 
    cout << "Fail" << endl;
    return 0;
    }

