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

// Question 3 
 #include <iostream>             
 using namespace std; 
   int main(){
    double num1,num2,result;
    cout << "Input the number of questions ->" << endl;
    cin >> num1 ;
    cout << "Input the number of questions the student answer correctly ->" << endl;
    cin >> num2
    result = num2 * 100 / num1;
    cout << "The student's score is " << result <<endl;
     return 0;
   }

// Question 4 Write a program to read in height in meter and weight in kg.  Calculate and display the body mass index. 
 #include <iostream>
 using namespace std;

int main() {
	double height, weight,bodyMass;
	cout << "Insert your height in (m)" << endl;
	cin >> height;
	cout << "Insert your weight in (kg)" << endl;
	cin >> weight;
	bodyMass = weight / (height*height) ;
	cout << "Your Body MASS Index is " << bodyMass << endl;
	return 0;
}
//Question 5 
// Question 6 
#include <iostream>             
using namespace std;

int main() {
	double width, length, height;
	cout << "Pls enter width length and height seperate with one or more space" << endl;
	cin >> length >> width >> height;
	double pyramid = length * width * height / 3;
	cout << "The volume of a pyramid is " << pyramid << endl;
	return 0;

