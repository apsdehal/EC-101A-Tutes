#include<iostream>
using namespace std;
int main()
{
    char string[]={"We have taken EC101A ."};
    cout<<string<<endl;
    char search[5];
    cin>>search;
    int k=0,l=0; 
    while(string[k]!='\0')
      {
          if(string[k]==search[l])
              {   int m=k;
                  while(search[l]!='\0')
                   {
                   if(search[l]!=string[m])
                  break;m++;l++;
                  }
if(search[l]=='\0')
              cout<<"found "<<search<<" at position "<<k+1<<endl;
          }
k++;
      }
cin.ignore();
cin.get();
    return 0;
}

