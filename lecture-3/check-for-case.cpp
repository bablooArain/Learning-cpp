#include <iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	if(ch >= 97 && ch <= 122){
		cout<<"lowercase\n";
	}else if(ch >= 65 && ch <= 90){
		cout<<"uppercase\n";
	}else{
		cout<<"Invalid character!\n";
	}

	return 0;
}
