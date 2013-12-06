#include <iostream>
using namespace std;
int main(){
	int A[10]= {10,30,40,50,70,64,43,34,56,89};
	int B[9]= {10,50,40,78,89,23,37,57,67};
	int i,j,k;
	for(i=0;i<10;i++){k=0;
		for(j=0;j<9;j++){
			if(A[i]==B[j]) break;
			else k++;
			if(k==8) cout<<A[i]<<endl;
			}
	}
	for(i=0;i<9;i++){
		for(j=0;j<10;j++){
			if(A[j]==B[i]) break;
			if(j==9) cout<<B[i]<<endl;
			}
	}
	cin.ignore();
	cin.get();
	return 0;
}
