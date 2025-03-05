#include <iostream>
using namespace std;
int main(){
	int num;
	int sum = 0;
	int i = 1;
	cout<<"Enter a number: ";
	cin>>num;
	for(int i = 1; i<=num; i++){
		if(i%2 == 0){
			sum = sum + i;
		}
	}
	cout<<"sumEven: "<<sum<<endl;
	return 0;

}


