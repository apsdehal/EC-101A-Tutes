#include <iostream>
#include <iomanip>
using namespace std;
long fact(int n){
	return (n==0||n==1)?1:(n*fact(n-1));
}
int main(){
	int n,i;
	cout<<"Enter the no. to which you want to find the factorial:"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	cout<<setw(2)<<right<<i<<"!="<<left<<setw(6)<<fact(i)<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
