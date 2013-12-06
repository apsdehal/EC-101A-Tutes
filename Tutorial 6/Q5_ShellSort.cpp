#include <iostream>
using namespace std;
int main(){
	int n,i,j,d,temp,k;
	cout<<"Enter the no. of elements of int array:- ";
	cin>>n;
	d=(n+1)/2;
	int a[n];//Decalaring an array
	cout<<"\nEnter the elements:-"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];//Intializing the array
	cout<<"Want to arrange:-\n1.Ascendingly     2.Descendingly (Enter 1 or 2)"<<endl;
	cin>>k;
	//Applying the shell sort
	do {
		d = (d + 1)/2;
		for (i =0; i < (n - d); i++)
		{if (a[i + d]>a[i])
			{temp = a[i+d];
			a[i + d] = a[i];
			a[i] = temp;
			}
		}
	} while(d > 1);
	cout<<"Elements of array you entered in sorted order are:- ";
	if(k==2){
	
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";}
	else{for(i=n-1;i>=0;i--)
	cout<<a[i]<<" ";
	}
	cout<<"\nGoodbye!"<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
