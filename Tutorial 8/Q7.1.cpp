#include <iostream>
using namespace std;
class three_d{
	private:
		int x,y,z;
	public:
		three_d(){x=0;y=0;z=0;
		}
		three_d(int a,int b,int c);
		three_d(three_d &k){
			x=k.x;
			y=k.y;
			z=k.z;
		}
		void display();
		
		void copy(three_d p){
			x=p.x;
			y=p.y;
			z=p.z;
		}
		three_d& operator + (three_d &p){
			three_d temp(x+p.x,y+p.y,z+p.z);
			return temp;
		}
		~three_d (){
			cout<<"\nThe object is destroyed"<<endl;
		}
};

three_d::three_d(int a,int b,int c){
	x=a;
	y=b;
	z=c;
}
void three_d::display(){
	cout<<"The coordinates are: "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
int main(){
	int x,y,z;
	three_d n;
	cout<<"Without intialization the class :";
	n.display();
	cout<<"Enter the x,y,z coordinates: ";
	cin>>x>>y>>z;
	three_d t(x,y,z);
	t.display();
	cout<<"Copying t in new class m: \n";
	three_d m(t);
	m.display();
	cout<<"Copying t in existing class n: ";
	n.copy(t);
	n.display();
	cout<<"Creating new class j sum of t and n";
	three_d j;
	j=t+n;
	j.display();
	cin.ignore();
	cin.get();
	return 0;
}
