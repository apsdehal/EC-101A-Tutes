#include <iostream>
using namespace std;
void inputNumber(int *);
void doubleValue(int *);
int main(){int a;
cout<<"Enter the no.: ";
	inputNumber(&a);
	doubleValue(&a);
	cout<<"The no after double is : "<<a<<endl;
	cin.ignore();
	cin.get(); return 0;
}
void inputNumber(int *a){
	cin>>*a;
}
void doubleValue(int *a){
	*a= *a*2;
}
