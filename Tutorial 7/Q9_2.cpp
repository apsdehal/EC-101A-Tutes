#include <iostream>
using namespace std;
int find(int *,int);
int main(){
	cout<<"Enter the no of elements in array: ";int n;
	cin>>n;
	int a[n];
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter the no to be found: ";int k;
	cin>>k;
	find(a,k);
	cin.ignore();
	cin.get();
	return 0;
}
int find(int *a,int n){
	for(int i=0;i<n;i++){
		if(*a==n){return &a;}
		a++;
	}
	cout<<"Not found";
	return 0;
} 
