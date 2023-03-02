//1
#include <iostream>
using namespace std;

int main()
{
    double balance,interest,total;
    cout << "Enter Balance: ";
    cin >> balance;
    cout << "Enter interest rate: ";
    cin >> interest;
    total = balance + balance * interest / 100;
    cout << "Balace at the end of the year with interest is " << total;
    
    return 0;
}

//2
#include <iostream>

using namespace std;

int main()
{
    int selection;
    double payout,ot,hour;
    do {
    cout  << "1. Part-timer" << endl
    << "2. Employee" << endl
    <<  "Select a Worker Type (1/2): ";
    cin >> selection;
        switch (selection){
        case 1: ot = 25; break;
        case 2: ot = 20; break;
        default: cout << "invalid options" << endl <<endl; }
    } while (selection != 1 && selection !=2);
    cout << "number of hours for ot: ";
    cin >> hour;
    payout = hour * ot;
    cout << "OT Payment is $" << payout;
    return 0;
}

//3
if (selection == 1)
sum = x+y;
else if (selection == 2)
sum = x-y;
else if (selection ==3)
sum = x*y;

//4
#include <iostream>

using namespace std;

int main()
{
int i,num;
for (i=1;num <99;i++){
    num = i * 3;
    cout << num << " ";
    
}
return 0;
}

#include <iostream>

using namespace std;

int main()
{
int i,num;
for (i=2;i<=100;i++){
    if (i % 2 == 0)
    cout << i << " ";
}
return 0;
}

#include <iostream>

using namespace std;

int main()
{
int i,num=1;
cout << num << " ";
while (num <127){
    num = num * 2;
    cout << num << " ";
}
return 0;
}

//5
#include <iostream>
using namespace std;

double doPerimeter(double length,double width,double height){
    return (( length + width + height ) * 4 );
}

double doSurface(double length,double width,double height){
    return ( 2 * ( length * width + width * height + height * length ));
}

double doVolume(double length,double width,double height){
    return (length * width * height);
}

int main()
{

double length,width,height;

cout << "Enter length,width,height seperate with space: ";
cin >> length >> width >> height;
double perimeter = doPerimeter(length,width,height);
double surface = doSurface(length,width,height);
double volume = doVolume(length,width,height);
cout << "The perimeter of rectangular prism is " << perimeter << endl;
cout << "The surface of rectangular prism is " << surface << endl;
cout << "The volume of rectangular prism is " << volume << endl;
return 0;
}



