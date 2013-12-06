#include <iostream>
using namespace std;
int MAX(int a[],int n){int max=a[0],i;
	for(i=1;i<4;i++)
	if(max<a[i]) max=a[i];
	return max;
}
int main(){
	int a[4],i;
	cout<<"Enter your four nos.: ";
	for(i=0;i<4;i++)
	cin>>a[i];
	cout<<"Max out of your elements is: "<<MAX(a,4)<<endl;
	cin.ignore();
	cin.get();
	return 0;
	
}
