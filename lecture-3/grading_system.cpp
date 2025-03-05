#include <iostream>
using namespace std;
int main(){
	int obtained_marks;
	int total_marks;
	double percentage;
	cout<<"Enter obtained marks: ";
	cin>>obtained_marks;
	cout<<"Enter total marks: ";
	cin>>total_marks;
	percentage = (static_cast<double>(obtained_marks)/total_marks)*100;
	if(percentage >= 90){
		cout<<"Grade: A\n";
	}else if(percentage >= 80 && percentage < 90){
		cout<<"Grade: B\n";
	}else if(percentage >= 60 && percentage < 80){
		cout<<"Grade: C\n";
	}else{
		cout<<"Failed\n";
	}
	
	return 0;
}
