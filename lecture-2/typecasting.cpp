#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
	float num = 23.3;
	double new_num = num; // impliciat typecasting (conversion)

	cout<<new_num<<endl;
	cout<<typeid(new_num).name()<<endl;
	cout<<typeid(num).name()<<endl;

	double price = 99.99;
	int new_price = (int)price;// expliciat typecasting

	cout<<price<<typeid(price).name()<<endl;
	cout<<new_price<<typeid(new_price).name()<<endl;
	return 0;
}
