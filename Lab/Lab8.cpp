//Question 1 
#include <iostream>
using namespace std;

int main() {
	int i;
	for (i = 1;i <= 100;i++) {
		if (i % 3 == 0)
		cout << i << endl;
	}
	return 0;
}

//Question 2 
#include <iostream>
using namespace std;

int main() {
	int i;
	for (i = 1;i <= 20;i++) {
		if (i % 2 == 0)
			cout << i << endl;
	}
	return 0;
}

//Question 3
#include <iostream>
using namespace std;
int main() {
	int min, max, square, cube;
	cout << "Enter a min and max value seperate with space: ";
	cin >> min >> max;
	cout << "Integer\t" << "Square\t" << "Cube\t" << endl;
	for (min; min <= max; min++) {
		square = min * min;
		cube = square * min;
		cout << min << "\t" << square << "\t" << cube << endl;
	}
	cout << endl;
	return 0;
}

//Question 4
#include <iostream>
using namespace std;

int main() {
	int i, total = 0;
	for (i = 1;i <= 50;i++) {
		total = total + i;
	}
	cout << "Total of integers from 1 to 50 is " << total;
	return 0;
}

//Question 5
#include <iostream>
using namespace std;

int main() {
	int i,num;
	cout << "Input a positive integer :";
	cin >> num;
	for (;num < 0;) {
		cout << "This is not a positive integer" << endl;
		cout << "Input a positive integer :";
		cin >> num;
	}
	cout << "The Factor of " << num << " is ";
	for (i = 1; i <= num;i++) {
		if (num % i == 0) {
			cout << i << " ";
		}
	}
return 0;
}
