#include <iostream>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main() {int a,b;
	cout<<"Enter two nos.:";
	cin>>a>>b;
	cout<<"Nos. before swap: "<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<"Nos. after swap: "<<a<<" "<<b;
	cin.ignore();
	cin.get();
	return 0;
	
}
