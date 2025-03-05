#include <bitset>
#include <iostream>
using namespace std;
bool isPowerOfTwo(int n) {
	bitset<32> bin(n);
	if (bin.count() != 1 || n == 1) {
		return false;
	}
	return true;
}
int main() {
	int n;
	cout << "Enter a number to check: ";
	cin >> n;
	if (isPowerOfTwo(n)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
