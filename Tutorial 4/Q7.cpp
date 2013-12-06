#include <iostream>
#include <algorithm>
using namespace std;
int main(){int i,j;
	int a[10] ={4,2,6,9,3,1,5,39,57,33};
	sort(a,a+10);
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++)
		if(a[j]==(6*a[i]+3)) {cout<<a[j]<<" is equal to "<<"6*"<<a[i]<<"+3"<<endl;break;
		}
		
	}cin.ignore();cin.get();
	return 0;
}
