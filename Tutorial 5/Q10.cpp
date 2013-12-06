#include <iostream>
using namespace std;
void Compute_Volume(float &volume,float radius,float height){
	volume=3.1415*radius*radius*height;
}
int main(){
	float volume,radius,height;
	cout<<"Enter the radius and height: "<<endl;
	cin>>radius>>height;
	Compute_Volume(volume,radius,height);/*The program wont work until you give pass by reference since original
	memory has to be overwritten , or otherwise function must be int type*/
	cout<<"The volume is: "<<volume<<endl;
	cin.ignore();
	cin.get();
	return 0;
}

