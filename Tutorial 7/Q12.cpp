#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	int *p;p=new int [n];
	for(int i=0;i<n;i++){
		*p=0;p++;
	} p=p-n;
	for(int i=0;i<n;i++){
		cout<<*p<<" ";p++;
	}
	delete []p;
	cin.ignore();
	cin.get();
	return 0;
	 
}
