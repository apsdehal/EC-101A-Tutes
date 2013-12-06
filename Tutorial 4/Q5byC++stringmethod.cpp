#include <iostream>
#include <string>
using namespace std;
int main(){
	string s,a,b;
	cout<<"Enter the string:";
	getline(cin,s);
	cout<<"Enter the character to be found:";
	getline(cin,a);
	cout<<"Enter the word to be found:";
	getline(cin,b);
	cout<<"The character "<<a<<" is at the location "<<(int)s.find(a)+1<<" in "<<s<<endl;
	cout<<"The word "<<b<<" is at the location "<<(int)s.find(b)+1<<" in "<<s<<endl;
	cin.ignore();
	cin.get();
	return 0;


}

