#include <iostream>
#include <cstring>
using namespace std;
int toint(char *s, int n){int k=0;
	for(int i=0;i<n;i++){if(*(s+i)<'0' || *(s+i)>'9') return -1;
		k=10*k+((int)*(s+i)-int('0'));//or you can use ASCII code 48 for 0
	}
	return k;
}

int main(){
	char s[100];
	cout<<"Enter the string:"<<endl;
	cin>>s;
	int z=strlen(s);
	cout<<"The Decimal equivalent is "<< toint(s,z)<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
