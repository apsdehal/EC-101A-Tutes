#include <iostream>
#include <cmath>
using namespace std;
double checkroots(int a,int b,int c){//For checking the roots
	double z= (b*b-4*a*c);
	if(z>0) cout<< "Roots are real and distinct"<<endl;
	else if(z==0) cout<<"Roots are real and equal"<<endl;
	else cout<<"Roots are imaginary"<<endl;
	return z; 
}
int main() {
	int a,b,c;
	double z,x,root1,root2,value;
	cout<<"Enter the nos. a,b,c,x in the format to find the roots and value of ax^2+bx+c at x"<<endl;
	cin>>a>>b>>c>>x;
	z=checkroots(a,b,c);//Checking the roots
	value= (a*x*x+b*x+c);
	cout<<"Value of polynomial at x="<<x<<" is "<<value<<endl;//Calculating the value of polynomial
	if(z>=0){root1=((-b+sqrt(z))/(2*a));//For real roots
	root2=((-b-sqrt(z))/(2*a));
	cout<<"The roots are "<<root1<<" and "<<root2<<endl
	;}value=double(-(double)b/(2*a));//For imaginary roots
	if(z<0){cout<<"The roots are "<<value<<"+i"<<(sqrt(-z)/(2*a))<<" and "<<value<<"-i"<<(sqrt(-z)/(2*a))<<endl; 
	} cin.get();
	cin.ignore();
	return 0;
	
	 
}
