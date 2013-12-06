#include <iostream>
using namespace std;
class Exchange{
    protected:
	double rs,exchangeRate,amount;
	public:
		Exchange(double rupees, double rate){
			rs=rupees;exchangeRate=rate;
		}
		virtual void display()=0;
		virtual void convert()=0;
};

class Rs_to_Dollar:public Exchange{
	public:
		Rs_to_Dollar(double rupees, double rate):Exchange(rupees,rate){}
		void convert(){amount=rs*exchangeRate;
		}
		void display(){cout<<"Equivalent amount in Rs is to: "<<amount<<endl;
		}
};

class Rs_to_Euro:public Exchange{
	public:
		Rs_to_Euro(double rupees, double rate):Exchange(rupees,rate){}
		void convert(){amount=rs*exchangeRate;
		}
		void display(){cout<<"Equivalent amount in Rs is to: "<<amount<<endl;
		}
};
int main(){
	Rs_to_Dollar a(4,55);
	Rs_to_Euro b(4,80);
	a.convert();
	a.display();
	b.convert();
	b.display();
	cin.get();
	return 0;
}
