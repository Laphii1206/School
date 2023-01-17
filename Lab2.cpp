//Question 1
#include <iostream>             
 using namespace std; 
   
  int main () 
  { 
     double size = 0.5;                    
     double num1,             
            num2,
            average;               
     
    cout << "Enter two numbers separated by one or more spaces: "; 
    cin  >> num1 >> num2 ;
    average = (num1 + num2) * size;   
    cout << num1 << "," << num2 
    cout << "The average of the two numbers is: " << average << endl; 
    return 0;
 } 
  
// Question 2 
#include <iostream>             
 using namespace std; 
   int main(){
       double celcius,farenheit;
       cout << "pls input your celcius ->";
       cin >> celcius;
       farenheit = (celcius * 9/5) +32;
       cout << "Current Temperature is " << celcius << "°C or "<< farenheit <<" °F " << endl;
     return 0;
   }
