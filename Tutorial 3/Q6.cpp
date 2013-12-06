#include <iostream>
using namespace std;
int main() {
	int i=0,n;
	while(i<10){
		cin>>n;
		if(n<0) {cout<<"Negative no. entered"<<endl;break;}
		cout<<"You entered:"<<n<<endl;
		i++;
	}
	cin.get();
	cin.ignore();
	return 0;
}
