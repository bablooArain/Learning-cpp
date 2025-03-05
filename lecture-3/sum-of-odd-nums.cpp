#include <iostream>
using namespace std;
int main(){
	int num;
	int sum = 0;
	cout<<"Enter a number: ";
	cin>>num;
	for(int i = 1; i<=num; i += 2){
		sum = sum + i;
	}
	cout<<"sum: "<<sum<<endl;
	return 0;

}
