#include <iostream>
#include <iomanip>
using namespace std;
int main(){char s;int i;
	cout<< "Wanna go through which kinda loop?\n\t a.for b. while c. do-while\nInput your choice in form of a,b or c:" <<endl;
	cin>>s;
	if(s=='a') {cout<<"Number    Square"<<endl;
		for(i=1;i<=10;i++){
			cout<<setw(6)<<i<<"    "<<setw(6)<<i*i<<endl;
		}
	}
	if(s=='b'){i=1;cout<<"Number    Square"<<endl;
		while(i<=10){
			cout<<setw(6)<<i<<"    "<<setw(6)<<i*i<<endl;
			i++;
		}
	}
	if(s=='c'){i=1;cout<<"Number    Square"<<endl;
	do{
	   cout<<setw(6)<<i<<"    "<<setw(6)<<i*i<<endl;
		i++;
	}
	while(i<=10);
	}
	cin.get();
	cin.ignore();
	return 0;
}
