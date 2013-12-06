#include <iostream>
using namespace std;
char caseReversal(char a){
	if(a>='A' && a<='Z'){
	cout<<"You entered uppercase "<<a<<" and we converted it to lowercase ";
	return (a-'A'+'a');}
	else {
	cout<<"You entered lowercase "<<a<<" and we converted it to uppercase ";
	return (a-'a'+'A');
}}
int main(){
	char c;
	cout<<"Enter the character:"<<endl;
	cin>>c;
	cout<<caseReversal(c);
	cin.ignore();
	cin.get();
	return 0;
}
