#include <iostream>
using namespace std;
int main(){
	long int n,m;int d,i,l;
	cout<<"Enter the no. and digit:"<<endl;
	cin>>n>>d;
	m=n;
	for(i=1;i;i++){l=n%10;
		if(l==d) cout<<"Digit "<<d <<" is present at the place from right "<<i<<" in the no. "<<m <<endl;
		n=n/10;
		if(n==0) break;
	}
	cin.get();
	cin.ignore();
	return 0;
}
