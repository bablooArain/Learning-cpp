#include <iostream>
using namespace std;
int main() {
  int num;
  int sum = 0;
  int i = 1;
  cout << "Enter a number: ";
  cin >> num;
  while (i <= num) {
    sum = sum + i;
    i++;
  }
  cout << "Sum: " << sum << endl;
  return 0;
}
