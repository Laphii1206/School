#include <iostream>
using namespace std;

int main() {
int p=1, q;//1st element
	while (p<=3) {
		q = 1;
		while(q<=3){//2nd element
			cout << p << "," << q << endl;
			q++;
		}
		p++;
	}
	int i,j;
	for ( i = 1; i <= 3; i++) {//outer loop - 3 times		
		for ( j= 1; j <= 3; j++)//inner loop - 3 times
		{
			cout <<i<<","<< j << endl;
		}
	}
	for (i = 1; i <= 3; i++) {//outer loop - 3 times		
		for (j = 1; j <= i; j++)
		{
			cout << "*";
			//cout << "i="<<i << ",j=" << j << endl;
		}
		cout << endl;
	}
    return 0;
}