#include <iostream>
using namespace std;
int main(){
	int a[1]={1};
	float b[1]={3.4};
	char c[1]={'A'};
	cout<<"int array:-"<<a[0]<<"\nfloat array:-"<<b[0]<<"\nchar array:-"<<c[0]<<endl;
	cout<<"Enter the element of:-\n"<<"int array ";
	cin>>a[0];
	cout<<"\nfloat array";
	cin>>b[0];
	cout<<"\nchar array";
	cin>>c[0];
	cout<<"\nElements are"<<"\nint array:-"<<a[0]<<"\nfloat array:-"<<b[0]<<"\nchar array:-"<<c[0]<<endl;
	cin.ignore();
	cin.get();
	return 0;
	
}
