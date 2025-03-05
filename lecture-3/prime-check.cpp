#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number to check: ";
	cin>>num;
	for(int i = 2; i<=(num-1); i++){
		if(num%i == 0){
			cout<<"Not Prime\n";
			break;
		}else if(i == (num-1)){
			cout<<"Prime\n";

		}
			

	}	
	return 0;
}
