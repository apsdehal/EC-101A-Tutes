#include <iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"Enter the no. of elements of the array:"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<"The sum of elements of array u entered is "<< sum<<endl;
	cin.get();
	cin.ignore();
	return 0;

}
