#include <iostream>
using namespace std;
int abs(int n){
	return (n>0)?n:(-n);
}
double power(double base, int pow){double z=1;
	for(int i=1;i<=abs(pow);i++)
	z*=base;
	if(pow<0) return 1.0/z;
	else return z;
}
int main(){
	double z;int n;
	cout<<"Enter the base: "<<endl;
	cin>>z;
	cout<<"Enter the power: "<<endl;
	cin>>n;
	cout<<"The value of base "<<z<<" raise to the power "<<n<<" is "<<power(z,n);
	cin.ignore();
	cin.get();
	return 0;
	
}
