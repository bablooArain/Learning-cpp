#include <iostream>
using namespace std;
double sumOfnNums(double a, double b) {
	double val = 0;
	for (int i = a; i <= b; i++) {
		val = val + i;
	}
	return val;
}
int main() {
	cout << "The sum is: " << sumOfnNums(4, 7) << endl;
	return 0;
}
