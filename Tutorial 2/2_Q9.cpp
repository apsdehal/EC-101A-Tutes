#include<iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
while(1){
         cin>>a>>b>>c;
         if(a==5 && b==9 && c==2) cout <<"Sequence 592 is found\n";
         if(a==3 && b==4 && c==6) cout <<"Sequence 346 is found\n";
         if(a==4 && b==6 && c==5) cout <<"Sequence 465 is found\n";
         if(a==0 && b==0 && c==0) break;
         a=b;
         b=c;
         cin>>c;
         }
         cin.ignore();
         cin.get();
         return 0;
         }
         
        
