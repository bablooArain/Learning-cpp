#include <cctype>
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int getFact(int n) {
	double fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}
void getFibbonacci(int n) {
	int a = 0;
	int b = 1;
	cout << a << endl;
	cout << b << endl;
	for (int i = 0; i <= n; i++) {
		int sum = a + b;
		if (sum >= n) {
			break;
		}
		cout << sum << endl;
		a = b;
		b = sum;
	}
}
void checkPrime(int n) {
	if (isPrime(n)) {
		cout << "Prime" << endl;
	} else {
		cout << "Not Prime" << endl;
	}
}
void printPrime(int n) {
	for (int i = 0; i <= n; i++) {
		if (isPrime(i)) {
			cout << i << endl;
		}
	}
}
int getSumOfNN(int n) { return n * (n + 1) / 2; }

void getPrimeFactors(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			if (isPrime(i)) {
				cout << i << endl;
			}
		}
	}
}
int getGPsum(double a, int r, int numOfterms) {
	int sum = a * (1 - pow(r, numOfterms)) / (1 - r);
	return sum;
}
int getGCD(int a, int b) {
	if (a <= 0) {
		return b;
	} else if (b <= 0) {
		return a;
	} else if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	while (true) {
		int reminder = a % b;
		if (reminder == 0) {
			break;
		}
		a = b;
		b = reminder;
	}
	return b;
}
int getLCM(int a, int b) {
	int LCM = (a * b) / getGCD(a, b);
	return LCM;
}

int main() {
	int n;
	cout << "1.  Factorial\n"
		 << "2.  Fibbonacci\n"
		 << "3.  checkPrime\n"
		 << "4.  primePrint\n"
		 << "5.  Sum of numbers\n"
		 << "6.  PrimeFactors\n"
		 << "7.  GPsum\n"
		 << "8.  GCD\n"
		 << "9.  LCM\n"
		 << "10. Exit\n";
	while (1) {
		cout << "Select Please: ";
		cin >> n;
		switch (n) {
			case 1:
				int fact;
				cout << "Enter a number: ";
				cin >> fact;
				cout << "Factorial: " << getFact(fact) << endl;
				break;
			case 2:
				int fibb;
				cout << "Enter a number: ";
				cin >> fibb;
				getFibbonacci(fibb);
				break;
			case 3:
				int num;
				cout << "Enter a number: ";
				cin >> num;
				checkPrime(num);
				break;
			case 4:
				int num2;
				cout << "Enter a number: ";
				cin >> num2;
				printPrime(num2);
				break;
			case 5:
				int sum;
				cout << "Enter a number: ";
				cin >> sum;
				cout << "Sum: " << getSumOfNN(sum) << endl;
				break;
			case 6:
				int checkFor;
				cout << "Enter a number: ";
				cin >> checkFor;
				getPrimeFactors(checkFor);
				break;
			case 7:
				int a, r, n;
				cout << "Enter respectively: First number | Common ratio | "
						"Number of terms: ";
				cin >> a >> r >> n;
				cout << "GP Sum: " << getGPsum(a, r, n) << endl;
				break;
			case 8:
				int firstNum, secondNum;
				cout << "Enter respectively: First Number | Second Number: ";
				cin >> firstNum >> secondNum;
				cout << "GCD: " << getGCD(firstNum, secondNum) << endl;
				break;
			case 9:
				int firstVal, secondVal;
				cout << "Enter respectively: First Number | Second Number: ";
				cin >> firstVal >> secondVal;
				cout << "LCM: " << getLCM(firstVal, secondVal) << endl;
				break;
			case 10:
				return 0;
			default:
				cout << "Number is not in range" << endl;
		}
	}
	return 0;
}
