#include <iostream>
using namespace std;
int sumDiff(int a,int b,bool SumorDiff){
	if(SumorDiff) return a+b;
	else return a-b;
}
int main() {
	int a,b;bool k;
	cout<<"Enter the two nos.: ";
	cin>>a>>b;
	cout<<"Want to calculate?"<<"\n 1. Sum 0. Difference (Enter 1 or 0) ";
	cin>>k;
	cout<<"The result is: "<<sumDiff(a,b,k);
	cin.ignore();
	cin.get();
	return 0;
	
}
