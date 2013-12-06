//Tutorial 1 Q.8.
#include <iostream>
using namespace std;
int main() {
	int number1, number2;
	cin>> number1>>number2;
	if(number1>number2) cout<<number1<<"is larger."<<endl;
	else if(number2>number1) cout<<number2<<"is larger."<<endl;
	else cout<<"These numbers are equal"<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
