#include <iostream>
#include <string>
using namespace std;
int main(){
char name='a';
int  anint=10;
double afloat=1.2;
cout << name << " , size of var is : " << sizeof(name) << " , size of ptr is : " << sizeof(&name)<< endl;
cout << anint << " , size of var is : " << sizeof(anint) << " , size of ptr is : " << sizeof(&anint)<< endl;
cout << afloat << " , size of var is : " << sizeof(afloat) << " , size of ptr is : " << sizeof(&afloat)<< endl;
cout<<"Every time value of ptr is same as it stores an integer hexadecimal value hence size =4";
cin.ignore();
cin.get();
return 0;
}
