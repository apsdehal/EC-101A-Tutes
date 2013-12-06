#include <iostream>
using namespace std;
#define PI 3.14
#define AREA(X) PI*X*X
int main(){int x;
	cout<<"Enter the radius:"<<endl;
	cin>>x;
	cout<<"Area of the circle is: "<<AREA(x)<<" with value of PI="<<PI<<endl;
	#undef PI
	#ifndef PI
	#define PI 3.14159
	#endif
	cout<<"Area of the circle is: "<<AREA(x)<<" with value of PI="<<PI<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
