#include <iostream>
using namespace std;
int getBinary(int n) {
	int finalNum = 0, power = 1;
	while (n > 0) {
		int reminder = n % 2;
		n = n / 2;
		finalNum += (reminder * power);
		power *= 10;
	}
	return finalNum;
}
int main() {
	for (int i = 1; i <= 10; i++) {
		cout << "Binary of " << i << ": " << getBinary(i) << endl;
	}
	return 0;
}
