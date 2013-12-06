#include <iostream>
using namespace std;
int main()
{
int a[5];
int i,j,k;
for(i=0;i<5;i++)
cin>>a[i];
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{for(k=0;k<5;k++)
{if((a[i] + a[j]>a[k]) && (a[j] + a[k]>a[i]) && (a[k] + a[i]>a[j]) && (i!=k)&&(i!=j) && (j!=i)&&(j!=k) && (k!=i)&&(k!=j))
cout<<"The possible sides of a triangle are "<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;}}}
cin.ignore();
cin.get();
return 0;
}

