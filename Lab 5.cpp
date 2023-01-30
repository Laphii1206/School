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
        cout << a << " is smaller than " << b << endl;

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

