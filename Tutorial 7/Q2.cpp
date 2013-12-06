#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the no. of elements: "<<endl;
    int N;
    cin>>N;
    int a[N];
    cout<<"Enter the array: "<<endl;
    for(int i=0;i<N;i++)
    cin>>a[i];
    cout<<"Enter the element to be searched: "<<endl;
    int k;
    cin>>k;
    for(int *p=a;*p!=a[N];p++){
            if(*p==k) {cout<<"Address of "<<k<<" is "<<p;cin.ignore();cin.get();return 0;}
            }
            cout<<"NULL"<<endl;
            cin.ignore();cin.get();
            return 0;}
