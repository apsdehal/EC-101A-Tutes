#include <iostream>
using namespace std;
double sum (double *,int );
int main() {
	int n;
	cout<<"Enter the no of elements: ";
	cin>>n;
	double *a = new double [n];
	cout<<"Enter the n value: ";
	for(int i=0;i<n;i++){
	cin>>a[i];}
	
	cout<<"The sum is: "<< sum(a,n);
	delete []a;
	cin.ignore();
	cin.get();
	return 0;
}
double sum (double *a,int n){
	if (n<0) return 0;
	return a[0]+sum(a+1,n-1);
}
