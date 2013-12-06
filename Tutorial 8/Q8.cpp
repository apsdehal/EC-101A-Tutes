#include <iostream>
#include <cmath>
using namespace std;
class three_d{
	private:
		int x,y,z;
	public:
		three_d(){x=0;y=0;z=0;
		}
		three_d(int a,int b,int c);
		three_d(const three_d &k){
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
		three_d operator+(three_d p){
			three_d temp;
			temp.x=x+p.x;
			temp.y=y+p.y;
			temp.z=z+p.z;
			return temp;
		}
		three_d operator-(three_d p){
			three_d temp;
			temp.x=x-p.x;
			temp.y=y-p.y;
			temp.z=z-p.z;
			return temp;
		}
		float distance(three_d p){
			three_d temp;
			temp.x=x-p.x;
			temp.y=y-p.y;
			temp.z=z-p.z;
			return sqrt(temp.x*temp.x+temp.y*temp.y+temp.z*temp.z);
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
	cout<<"Enter the x,y,z coordinates for class t: ";
	cin>>x>>y>>z;
	three_d t(x,y,z);
	t.display();
	cout<<"Enter the x,y,z coordinates for another class k from which we want to find the distance: ";
	cin>>x>>y>>z;
	three_d k(x,y,z);
	cout<<"Creating new class j difference of t and n";
	three_d j;
	j=t-k;
	cout<<"The distance is : "<<j.distance(n);
	cin.ignore();
	cin.get();
	return 0;
}
