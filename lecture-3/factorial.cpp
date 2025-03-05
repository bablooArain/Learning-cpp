#include <iostream>
using namespace std;
int main() {
  int num;
  int fact = 1;
  cout << "Enter number to get factorial: ";
  cin >> num;
  for (int i = num; i >= 1; i--) {
    fact = fact * i;
  }
  cout << "Factorial: " << fact << endl;
  return 0;
}
