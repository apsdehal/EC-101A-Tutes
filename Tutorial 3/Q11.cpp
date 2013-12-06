#include <iostream>
using namespace std;
int main(){
	int i,j,k;
	int a[3];
	cout<<"Enter the three nos. of you want to find combinations:"<<endl;
	for(i=0;i<3;i++)
	cin>>a[i];
	cout<<"Combinations are:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				if(i!=j && j!=k && i!=k) cout<<(100*a[i]+10*a[j]+a[k])<<" ";
			}
		}
	}
	cin.get();
	cin.ignore();
	return 0;
}
