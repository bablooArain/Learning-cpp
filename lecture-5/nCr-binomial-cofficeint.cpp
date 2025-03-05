#include <iostream>
using namespace std;
int getFact(int n) {
	int fact = 1;
	for (int i = n; i >= 1; i--) {
		fact = fact * i;
	}
	return fact;
}

int getNcr(int n, int r) { return getFact(n) / (getFact(r) * getFact(n - r)); }
int main() {
	cout << getNcr(8, 2) << endl;
	return 0;
}
