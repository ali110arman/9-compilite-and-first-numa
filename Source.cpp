#include <iostream>
using namespace std;
void main() {
	int num, num2, sum = 0, i = 1;
	cout << "please inter your number\n";
	cin >> num;
	while (num < 0) {
		cout << "your number is negetive inter posetive one\n";
		cin >> num;
	}
	while (i < num) {
		if (num % i == 0) {
			sum = sum + i;
		}
		i = i + 1;
	}
   	if (sum == num) {
		num2 = sqrt(num);
		if (pow(num2, 2) == num) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	else {
		cout << "No" << endl;
	}

	int i,n,count=0;
}
