#include <iostream>
using namespace std;
double minOfnums(double a, double b) {
	if (a == b) {
        cout<<"Numbers are equal ";
		return a == b;
	} else if (a < b) {
		return a;
	} else {
		return b;
	}
}
int main() {
	cout << minOfnums(11, 11) << endl;

	return 0;
}
