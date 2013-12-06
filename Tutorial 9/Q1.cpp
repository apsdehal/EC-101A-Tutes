#include<iostream>
using namespace std;
class customer{private:
		int p,points,identity,storepoint;
public:
       customer():p(0){};
	int assign_cust_id(int );
	void purchase(int p)
	{if (p>100 && p< 1000) points=10;
	 if (p> 1000) points=100;
	 if (p<100)   points=5;
     storepoints();	
	}
	int storepoints(){
	p=p+points;
	cout<<p<<endl;
	return p;}
	
	};
int customer::assign_cust_id(int id)
{
	static int count=0;
	if (count<100)
	++count;
	identity=count;cout<< "Your id is " << identity <<endl;
	return identity;
}
int main(){
customer c[100];
c[1].assign_cust_id(0);
c[1].purchase(1234);
c[1].purchase(123);
c[1].purchase(34);
c[2].assign_cust_id(0);
c[2].purchase(12);
c[2].purchase(120);
cin.get();
cin.ignore();
return 0;
}

