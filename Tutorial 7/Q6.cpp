#include <iostream>
using namespace std;
void get(int *a);
void display(int *a);
int main(){
	int a[3][3];
	get(a[0]);
	display(a[0]);
	cin.ignore();
	cin.get();;
	return 0;
}
void get(int *a){cout<<"Enter the array"<<endl;
	for(int i=0;i<6;i++){
	cin>>*a;
	a++;}
}
void display(int *a){cout<<"The array was"<<endl;
	for(int i=0;i<6;i++){
		cout<<*a<<" ";
		a++;
	}
}
	
