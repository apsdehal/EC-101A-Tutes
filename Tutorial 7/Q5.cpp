#include <iostream>
using namespace std;
void showValue(int *);
int main( ){
    int *p;   p = new int;   *p = 66;    cout<<"Before call to function *p = "<<*p<<endl;   showValue (p);
    cout<<"After call to function *p = "<<*p<<endl;
    cout<<"The results of the fuction show that the object was called by reference and not by value"<<endl; 
    cin.ignore( );   cin.get();   return 0;  
}
void showValue ( int *temp) {
cout<<"Inside function call in the beginning *temp = "<<*temp<<endl;
*temp = 77;
cout<<"Inside function call before exit *temp = "<<*temp<<endl; 
}     
