#include <iostream>
using namespace std;
int main() {
	double a,b,c;
	cout<<"Enter the three nos:"<<endl;
	cin>>a>>b>>c;
	if((a+b)>c && (b+c)>a && (c+a)>b) cout<<a<<" "<<b<<" and "<<c<<" can form a triangle"<<endl;
	else cout<<"No such triangle is possible"<<endl;
	cin.get();
	cin.ignore();
	return 0;
}
