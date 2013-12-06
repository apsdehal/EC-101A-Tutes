#include <iostream>
using namespace std;
const int N=5;
void Print(int *a){
     for(int i=0;i<N;i++){
             cout<<a[i]<<endl;}}
int  main( )     
  {
    int a[N] ={ 55, 22, 99, 66, 44}; 
    Print (a);
    cin.ignore( );   cin.get( );
    return 0;    
     }

          
