//program 5 - escape sequence (/) , r
#include <iostream>
using namespace std;

	int main() 
	{
	cout << "My Name is \rLaphii." << endl;
	cout << "I study CIT1003";
	return 0;
        }
/*
Laphii. name is 
I study CIT1003
*/

//program 4 - escape sequence (/) , ",\
#include <iostream>
using namespace std;

	int main() 
	{
	cout << "My Name is \"Laphii\"." << endl;
	cout << "I study CIT1003";
	return 0;
        }
/*
My name is \Laphii".
I study CIT1003
*/

//program 3 escape sequence 
#include <iostream>
using namespace std;

	int main(){
	cout << "My \tName is \nLaphii.";
	cout << "I study \nCIT1003";
	return 0;
        }

/*
output
My      Name is
Laphii. I study 
CIT1003
*/

//program 2 variable - 
#include <iostream>
using namespace std;

	int main(){
	int age;
	cout << "How old are you\n";
	cin >> age;
	cout << "you are " << age << " years old";
	return 0;
	}

//program 1 simple command line
#include <iostream>
using namespace std;

	int main(){
	cout << "hello!";
	return 0;
	}
