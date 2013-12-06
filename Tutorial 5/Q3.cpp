#include <iostream>
using namespace std;
int maximum(int a,int b,int c){
	return (a>b)?((a>c)?a:c):(b>c?b:c);
}
int main() {int a,b,c;
	cout<<"Enter the three nos. you want to check the maximum of:"<<endl;
	cin>>a>>b>>c;
	cout<<"The maximum of the "<<a<<","<<b<<" & "<<c <<" is "<<maximum(a,b,c)<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
