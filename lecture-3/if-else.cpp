#include <iostream>
using namespace std;
int main() {
  string name;
  int password;
  cout << "Username: ";
  cin >> name;
  cout << "Password: ";
  cin >> password;
  if (name == "Nabeel" && password == 20032004) {
    cout << "You are logged in...\n";
  } else {
    cout << "Invalid username or password!\n";
  }

  return 0;
}
