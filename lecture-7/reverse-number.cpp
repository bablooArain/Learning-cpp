#include <iostream>
#include <string>
using namespace std;
int numReverse(int n) {
	string num = "";
	while (n > 0) {
		int val = n % 10;
		n = n / 10;
		num += to_string(val);
	}
	return stoi(num);
}
int main() {
	int n;
	cout << "Enter a number to reverse: ";
	cin >> n;
	cout << numReverse(n) << endl;
	return 0;
}
