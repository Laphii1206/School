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
    cout << "Pass and Good" << endl;
    else if (num>=50 && num<=79)
    cout << "Pass" << endl;
    else if (num>=45 && num<=49)
    cout << "Fail and Resit" << endl;
    else 
    cout << "Fail" << endl;
    return 0;
    }

