#include<iostream>
#include<cmath>
using namespace std;
long fact(int x){
	if(x==0 || x==1) return 1;
	else return x*fact(x-1);
}
int main()
{
    float a;
    int n, m;    
    cout<<"enter the angle?(degree) & no. of terms to evaluate: ";
    cin>>a>>n;
    while(a>=0)
    {
        double r = (a/180)*3.14159;
        float sum=0.000;
        for(int i=1; i<=n; i++)
        {
            if(i%2==0)
            m = (-1);
            else
            m = 1;
            sum = sum + m*(pow(r, 2*i-1))/fact(2*i-1);
        }
        cout<<"sin("<<n<<") = "<<sum<<endl;
        double error = ((sin(r) - sum) / sum ) *  100;
        cout<<"error = "<<error<<"%\n";
        cout<<"enter the angle(degree) & no. of terms to evaluate: ";
        cin>>a>>n;
    }
    
    cin.get();
    cin.ignore();
    return 0;
}        
            
