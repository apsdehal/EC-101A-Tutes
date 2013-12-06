#include <iostream>
using namespace std;
int main(){
	int i,j,k;
	float n,pi;
	cin>>k;
	
	for(i=0;i<k;i++){
		j=2*i+1;
		n=4./j;
		switch(i%2){
			case 0: pi+=n;break;
			case 1: pi-=n;break;
		}
		cout<<"Value of PI by "<<i+1<<"th term of the series:"<<pi<<endl;
	}
	
}
