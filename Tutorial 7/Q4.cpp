#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<"The pointer functions are shown respectively: "<<endl;
    cout<<"a. int calcarea(int x, int y)   "<<"int pointer(int (*pf)(int k,int z))"<<endl;
    cout<<"Use as pointer(calcarea)"<<endl;
cout<<"b.char printmyname(string s)   "<<"int pointer(char (*pf)(string k))"<<endl;
cout<<"Use as pointer(printmyname)"<<endl;
cout<<"c.int randomfunc(float x, double y, int z)    "<<"int pointer( int (*pf)(float x,double y, int z)"<<endl;
cout<<"Use as pointer(randomfunc)"<<endl;
cout<<"d.int mytime(int a, int b)    "<<"int pointer(int (*pf)(int a , int b))"<<endl;
cout<<"Use as pointer(mytime)"<<endl;
cout<<"e.float nicefunc(int i, int j)   "<<"float pointer(float (*pf)(int a,int b))"<<endl;
cout<<"Use as pointer(nicefunc)"<<endl;
cout<<"pointer function of a can be used for d, but not for e because passed function type is defined in the prototype"<<endl;
cin.ignore();
cin.get();
return 0;}
