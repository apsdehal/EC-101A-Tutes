#include<iostream>
using namespace std;
int sum(int (*)(int),int );
int square(int );
int cube(int );
int main(){
	int n;
	cout<<"Enter the no.: ";
	cin>>n;
	cout<<"The sum of the squraes upto "<<n<<" is "<<sum(square,n)<<endl;
	cout<<"The sum of the cubes upto "<<n<< " is "<<sum(cube,n)<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
int square(int n){
	return n*n;
}
int cube(int n){
	return n*n*n;
}
int sum (int (*pf)(int k),int n){
	int z=0;
	for(int i=2;i<=n;i=i*2)
	z+=pf(i);
	return z;
}
