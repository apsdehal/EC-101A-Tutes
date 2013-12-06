#include <iostream>
using namespace std;
void exchangesort(float *a,int n){int i,j;
         for(i=1;i<n;i++ ){//for descending
	for(j=0;j<i;j++){
	
		if(a[i]>a[j]) swap(a[i],a[j]);}
	}}
int main(){
    float A[10];
    cout<<"Enter the elements of the size 10 float array: "<<endl;
    for(int i=0;i<10;i++)
            cin>>A[i];   
    exchangesort(A,10);
    cout<<"The reversed order array is: "<<endl;
    for(int i=0;i<10;i++)
    cout<<A[i]<<" ";
    cin.ignore();
    cin.get();
    return 0;}      
