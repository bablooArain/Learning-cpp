#include <iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << endl;
		sum = sum + i;
	}
	cout << "Sum: " << sum << endl;
	return 0;
}
