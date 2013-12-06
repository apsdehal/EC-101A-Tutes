#include <iostream>
using namespace std;
int C[16]={0};
void bin(int a)
{
    
    int i=0;
    for(i=0; i<16; i++)
    {
        C[i] = a%2;
        a/=2;
        if (a==0)
        break;
    }
    for(i; i>=0; i--)
    {
        cout<<C[i];
    }    
}        
    
int main()
{
    int a, b,z;
    int A[16]={0}, B[16]={0}, S[16]={0};
    cout<<"Enter two nos.:"<<endl;
    cin>>a>>b;
    cout<<"The binary equivalent of "<<a<<" and "<<b<<" are ";
    bin(a);
    
    for(int i=0; i<16; i++)
    {
        A[i] = C[i];
        C[i] = 0;
    }
    cout<<" and ";
    bin(b);
    for(int k=0; k<16; k++)
    {
        B[k] = C[k];
    }
    cout <<" and their addition is ";
    
    int carry=0;
    for(int i=0; i<16; i++)
    {
        
        if ((carry + A[i] + B[i]) == 0)
        {
            carry = 0;
            S[i] = 0;
        }
        else if ((carry + A[i] + B[i]) == 1)
        {
            carry = 0;
            S[i] = 1;
        }
        else if ((carry + A[i] + B[i]) == 2)
        {
            carry = 1;
            S[i] = 0;
        }
        else
        {
            carry = 1;
            S[i] = 1;
        }           
    }    
    for(int i=8; i>=0; i--)
    {
        
        cout<<S[i];
    }
    cout<<endl;    
    cin.get();
    cin.ignore();
    return 0;
}    
