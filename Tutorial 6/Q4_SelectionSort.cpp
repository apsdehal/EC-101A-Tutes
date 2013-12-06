#include <iostream>
using namespace std;
int main(){
	int n,i,j,temp,k;
	cout<<"Enter the no. of elements of int array:- ";
	cin>>n;
	int a[n];//Decalaring an array
	cout<<"\nEnter the elements:-"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];//Intializing the array
	cout<<"Want to arrange:-\n1.Ascendingly     2.Descendingly (Enter 1 or 2)"<<endl;
	cin>>i;
	//Applying the selection sort
	if(i==1){//for ascending
	/*selecting the current ith element as the min. and checking for the element that is 
	smaller than it and exchanging places if necessary and further continuing the process
	similarly the process can be explained for the descending process*/
	for(i=0;i<n-1;i++){k=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[k]) k=j;
		} swap(a[i],a[k]);
		
	}} else {	//for descending
	for(i=0;i<n-1;i++){k=i;
		for(j=i+1;j<n;j++){
			if(a[j]>a[k]) k=j;
		} swap(a[i],a[k]);
		
	}}

	cout<<"Elements of array you entered in sorted order are:-";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\nGoodbye!"<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
