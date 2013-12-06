#include <iostream>
using namespace std;
int main(){
	int a[10]={10,20,44,23,-12,34,-67,45,-48,78};
	int sum=0;
	for(int i=0;i<10;i++)
	if(a[i]>0) sum+=a[i];
	cout<<sum;
	cin.ignore();
	cin.get();
	return 0;
}
