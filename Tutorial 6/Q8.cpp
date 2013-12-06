#include <iostream>
using namespace std;
void buble(int *a, int n) {int m=n;
while(m--){
		for(int i=0;i<n;i++ ){
	if(a[i]>a[i+1]) swap(a[i],a[i+1]);}}}
void display(int *a,int n){cout<<"The sorted array is: "<<endl;
     for(int i=0;i<n;i++)
	cout<<a[i]<<" ";}	
int main(){
    cout<<"Enter the no. of digits: ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
            cin>>a[i];}
    buble(a,n);
    display(a,n);
    cin.ignore();
    cin.get();
    return 0;}        
    
    
