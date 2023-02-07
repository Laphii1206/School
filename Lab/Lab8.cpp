//Question 1 
#include <iostream>
using namespace std;

int main() {
	int i,table;

	for (i = 1;table < 99;i++) {
		table = i * 3;
		cout << table << endl;
	}
	return 0;
}

//Question 2 
#include <iostream>
using namespace std;

int main() {
	int i,value;
	for (i = 1;i <= 20;i++) {
		value = i % 2;
		if (value == 0)
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


