#include <iostream>
using namespace std;
int main() {
	int i;
	float sum=1,j=1;cout<<"Sum at the 1st term is:"<<sum<<endl;
	for(i=1;i<20;i++){j*=(i);
		switch(i%2){
			case 0:sum+=(i/j);break;
			case 1:sum-=(i/j);break;
		}cout<<"The sum to the "<<i+1<<" term of the series is:" <<sum<<endl;
	}
	cin.get();
	cin.ignore();
	return 0;
}
