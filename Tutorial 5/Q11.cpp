#include <iostream>
using namespace std;
int addition(int a,int b){
return a+b;}
float addition (float a,float b){
return a+b;}
int  main(){int m;
	int a,b;
	float c,d;
	cout<<"Want to go through which 1.int 2. float"<<endl;
	cin>>m;
	if(m==1){ cin>>a>>b;
	cout<<addition(a,b);
	}
	if(m!=1){ cin>>c>>d;
	cout<<addition(c,d);
	}
	cin.ignore();
	cin.get();
	return 0;
}
