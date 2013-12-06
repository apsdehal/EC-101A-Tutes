#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Enter the no. of elements of int array:- ";
	cin>>n;
	int a[n];//Decalaring an array
	cout<<"\nEnter the elements:-"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];//Intializing the array
	cout<<"Want to arrange:-\n1.Ascendingly     2.Descendigly (Enter 1 or 2)"<<endl;
	cin>>i;
	//Applying the exchange sort
	if(i==1){//for ascending
	for(i=0;i<n;i++ ){for(j=0;j<n;j++){
	
	if(a[i]<a[j]) swap(a[i],a[j]);}
	}} else {for(i=1;i<n;i++ ){//for descending
	for(j=0;j<i;j++){
	
		if(a[i]>a[j]) swap(a[i],a[j]);}
	}}
	cout<<"Elements of array you entered in sorted order are:-";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\nGoodbye!"<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
