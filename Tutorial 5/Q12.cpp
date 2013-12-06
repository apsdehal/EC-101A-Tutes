#include <iostream>
using namespace std;
float Box_Volume(float a=1, float b=1,float c=1){
	return a*b*c;
}

int main(){
	float a,b,c;
	cout<<Box_Volume()<<endl;
	cin>>a;
	cout<<Box_Volume(a)<<endl;
	cin>>a>>b;
	cout<<Box_Volume(a,b)<<endl;
	cin>>a>>b>>c;
	cout<<Box_Volume(a,b,c)<<endl;
	cin.ignore();
	cin.get();
	return 1;}
