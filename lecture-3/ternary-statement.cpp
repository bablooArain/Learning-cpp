#include <iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	cout<<(num1 > num2) ? "maximum" : "minimum";
	return 0;
}
