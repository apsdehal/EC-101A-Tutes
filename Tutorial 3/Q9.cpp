#include <iostream>
using namespace std;
int main(){
	int a,b,c,temp1,temp2;
	cout<<"Enter the three nos.:"<<endl;
	cin>>a>>b>>c;
	if(a<0 || b<0 || c<0){cout<<"OOPS! Sides can't be negative\t Try Again"<<endl; return 0;}
	if((a*a==(b*b+c*c)) || (b*b==(c*c+a*a)) || (c*c==(b*b+a*a))){ cout<<"Yeah! "<<a<<" "<<b<<" and "<<c<<" can represent a right angled triangle"<<endl;}
	else cout<<"Sorry! They can't represent a rt. angled triangle"<<endl;
	cin.get();
	cin.ignore();
	return 0;
	}
