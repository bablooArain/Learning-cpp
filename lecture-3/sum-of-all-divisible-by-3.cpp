#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	int sum = 0;
	for(int i = 0; i<=num; i++){
		if(i%3 == 0){
			sum = sum + i;
		}
	}
	cout<<"sum: "<<sum<<endl;
	return 0;
}
