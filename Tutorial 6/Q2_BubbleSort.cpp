#include <iostream>
using namespace std;
int main(){
	int n,i,j,m,k;
	cout<<"Enter the no. of elements of int array:- ";
	cin>>n;m=n;
	int a[n];//Decalaring an array
	cout<<"\nEnter the elements:-"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];//Intializing the array
	cout<<"Want to arrange:-\n1.Ascendingly     2.Descendigly (Enter 1 or 2)"<<endl;
	cin>>k;
	//Applying the bubble sort
	if(k==1){//for ascending
	while(m--){
		for(i=0;i<n;i++ ){
	if(a[i]>a[i+1]) swap(a[i],a[i+1]);}
	}} if(k==2) {while(m--){for(i=n-1;i>=0;i--){//for descending
		if(a[i]>a[i-1]) swap(a[i],a[i-1]);}
	}}
	cout<<"Elements of array you entered in sorted order are:-";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\nGoodbye!"<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
