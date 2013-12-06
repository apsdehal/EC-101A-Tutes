#include<iostream>
#include<cstdlib>
#include <iomanip>
using namespace std;
void solution(float a[],int n){float D,x,y,z;
     D = (a[0]*a[5]*a[10]+a[1]*a[8]*a[6]+a[2]*a[4]*a[9])-(a[0]*a[6]*a[9]+a[1]*a[4]*a[10]+a[2]*a[5]*a[8]);
x = ((a[1]*a[10]*a[7]+a[2]*a[5]*a[11]+a[3]*a[6]*a[9])-(a[1]*a[5]*a[11]+a[2]*a[9]*a[7]+a[3]*a[5]*a[10]))/D;
y = ((a[0]*a[6]*a[11]+a[2]*a[8]*a[7]+a[3]*a[4]*a[10])-(a[0]*a[10]*a[7]+a[2]*a[4]*a[11]+a[3]*a[6]*a[8]))/D;
z = ((a[0]*a[9]*a[7]+a[1]*a[4]*a[11]+a[3]*a[5]*a[8])-(a[0]*a[5]*a[11]+a[1]*a[8]*a[7]+a[3]*a[4]*a[9]))/D;
cout<<"The solutions to the above three equations are : "<<endl;;
cout<<"x = "<<setprecision(5)<<x<<"\ny= "<<setprecision(5)<<y<<"\nz= "<<setprecision(5)<<z<<endl;}
int main()
{
cout<<"PROGRAM TO SOLVE THREE VARIABLE LINEAR SIMULTANEOUS EQUATIONS"<<endl;
cout<<"The equations are of the form:\nax+by+cz+d=0 \nlx+my+nz+k=0 \npx+qy+rz+s=0"<<endl;
cout<<"Enter the coefficients one by one in order"<<endl;
float a[12];
for(int i=0;i<12;i++)
cin>>a[i];
cout<<"The equations you entered are: "<<endl;
cout<<a[0]<<"x+"<<a[1]<<"y+"<<a[2]<<"z+"<<a[3]<<"=0"<<endl;
cout<<a[4]<<"x+"<<a[5]<<"y+"<<a[6]<<"z+"<<a[7]<<"=0"<<endl;
cout<<a[8]<<"x+"<<a[9]<<"y+"<<a[10]<<"z+"<<a[11]<<"=0"<<endl;
solution(a,12);

cin.ignore();
cin.get();
return 0;
}
