#include <iostream>
#include <cmath>
using namespace std;
int Binary_To_Decimal(bool binaryNo[],int noOfBits) {int n=0;
bool flag=0;
if(binaryNo[0]==1) {for(int i=0;i<noOfBits;i++) binaryNo[i]= 1-binaryNo[i];flag=1;}
	for(int i=0;i<noOfBits;i++){
		n+=(binaryNo[noOfBits-i-1]*pow(2.0,i));
	}
	if(flag==1) return -(n+1);
	else return n;
}
int main(){
	int n;
	cout<<"Enter the no. of Bits:";
	cin>>n;
	bool a[n];
	cout<<"\nEnter the binary no. by taking spaces b/w:";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nDecimal Equivalent is: "<<Binary_To_Decimal(a,n);
	cin.ignore();
	cin.get();
	return 0;
}
