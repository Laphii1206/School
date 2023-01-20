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

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Insert the user score" << endl;
    cin >> num;
    if (num>=80)
    cout << "Pass and Good";
    else if (num>=50 && num<=79)
    cout << "Pass";
    else if (num>=45 && num<=49)
    cout << "Fail and Resit";
    else 
    cout << "Fail";
    return 0;
    }

