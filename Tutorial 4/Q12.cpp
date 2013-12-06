#include<iostream>
using namespace std;
int Square_Cube(int n,char b[]){
	if(b=="square") return n*n;
	if(b=="cube") return n*n*n;
}
int main() {
	int a;

	cout<<"Enter the no.: ";
	cin>>a;
	cout<<"Square is: "<<Square_Cube(a,"square")<<endl;
	cout<<"Cube is: "<<Square_Cube(a,"cube")<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
