#include <iostream>
using namespace std;
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
		int temp2 = a % b;
		if (temp2 == 0) {
			break;
		}
		a = b;
		b = temp2;
	}
	return b;
}
int getLCM(int a, int b) {
	int LCM = (a * b) / getGCD(a, b);
	return LCM;
}
int main() {
	cout << getLCM(18, 36) << endl;
	return 0;
}
