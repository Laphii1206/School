[9:46 am, 03/02/2023] +60 12-303 5224: #include <iostream>
using namespace std;
//for loop
int main()
{
	//for loop
	int d;
	for ( d = 1; d <= 5; d++) {
		//cout << "d="<<d << endl;
	}
	cout << d << endl;

	//while loop
	int c = 1;//1-control var
	while (c <= 5)//2-expression
	{
		//cout << "hello"<<endl;
		c++;//3-adjustment
	}
	cout << c << endl;
}
[9:46 am, 03/02/2023] +60 12-303 5224: #include <iostream>
using namespace std;
//1
int main7_1()
{
	int num = 2;
	cout << "The even numbers between 1 and 20 are:\n";
	while (num <= 20) {
		cout << num;
		if (num < 18)
			cout << ", ";
		else if (num == 18)
			cout << " and ";			
		num += 2;
	}
	//2, 4, 6, 8, 10, 12, 14, 16, 18 and 20.
	return 0;
}
[9:46 am, 03/02/2023] +60 12-303 5224: #include <iostream>
using namespace std;
//loop
int mainwhile()
{
	int counter = 11;//1. control variable with a value	
	while (counter <= 10) {//2. expression that controls to continue to loop
		cout << "hello" << endl;
		counter++;//3. control variable adjustment
	}
	int c = 1;
	do {//perform first before checking the condition
		cout << "welcome" << endl;
		c++;
	} while (c <= 10);
	
	//read in numbers from user until a negative value is given.
	int num=0;
	while(num>=0){//while the condition is true, repeat
		cout << "Enter a positive number to repeat (Negative to end): ";
		cin >> num;
	}

	do {
		cout << "Enter +ve number.";
		cin >> num;
	} while (num >= 0);
	cout << "You have entered a -ve number. Program ended";
	return 0;
}
