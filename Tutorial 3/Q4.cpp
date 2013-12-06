#include <iostream>
using namespace std;
int main(){char s;int i,j;long int fact=1;
	cout<< "Wanna go through which kinda loop?\n\t a.for b. while c. do-while\nInput your choice in form of a,b or c:" <<endl;
	cin>>s;
	cout<<"Enter the no.:"<<endl;
	cin>>j;if(j<1) cout<<"Factorial is:"<<fact;
	if(s=='a'){//for loop
	for(i=1;i<=j;i++) fact*=i;
	cout<<"Fact of "<<j<<" is "<<fact<<endl;
	}
	if(s=='b'){i=1;//While loop
		while(i<=j){fact*=i;
		i++;
		}
		cout<<"Fact of "<<j<<" is "<<fact<<endl;
	}
	if(s=='c'){i=1;//dowhile loop
		do{fact*=i;i++;
		} while(i<=j);
		cout<<"Fact of "<<j<<" is "<<fact<<endl;
	}cin.get();
	cin.ignore();
	return 0;
}
