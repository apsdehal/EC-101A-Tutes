#include <iostream>
using namespace std;
#define PI 3.1415
int main(){
	int x,h;
	#ifndef VOL(X,H)
	#define VOL(X,H) PI*X*X*H
	#endif
	cout<<"Enter the radius:";
	cin>>x;
	cout<<"Enter the height:";
	cin>>h;
	cout<<"The volume of the cone is:"<<VOL(x,h)<<endl;
	cin.ignore();
	cin.get();
	return 0;
	
}
