#include <iostream>
using namespace std;
int divsum(int n);
int main(){int n;
cout<<"Enter the no. you want to check for perfect no.:"<<endl;
cin>>n;
if(divsum(n)==n) cout<<"The no. "<<n<<" is a perfect no."<<endl;
else cout<<"The no. "<<n<<" is not a perfect no."<<endl;
cin.get();
cin.ignore();
return 0;
}
int divsum(int n){
	int k=2,sum=1;
	while(k<n){
		if(n%k==0) sum+=k;
		k++;
	}
	return sum;
}
