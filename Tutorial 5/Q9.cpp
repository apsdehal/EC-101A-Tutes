#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool perm(char *a, char *b){
	if(strlen(a)!=strlen(b)) return 0;
	sort(a,a+strlen(a));
	sort(b,b+strlen(b));
	for(int i=0;i<strlen(a);i++)
	if(*(a+i)!=*(b+i)) return 0;
	return 1;
}
int main(){
	char a[100],b[100];
	cout<<"Enter the two strings: "<<endl;
	cin>>a>>b;
	while(*b!='0'){
	if(perm(a,b)) cout<<"Congrats!!! They matched"<<endl;
	else cout<<"Sorry!!! They failed"<<endl;
	cout<<"Enter another second string(0 to exit):"<<endl;
	cin>>b;}
	cin.ignore();
	cin.get();
	return 0;
}
