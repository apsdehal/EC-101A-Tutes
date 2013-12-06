#include <iostream>
using namespace std;
int sum=0;
void f(int i){
	sum+=i;
}
int main(){
	int n;
	cout<<"Enter the no.: ";
	cin>>n;
	for(int i=1;i<=n;i++) f(i);
	cout<<"The sum of "<<n<<" integers is: "<<sum<<endl;
	cin.ignore();
	cin.get();
	return 0; 
}
