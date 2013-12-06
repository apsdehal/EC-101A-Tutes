#include <iostream>
using namespace std;
class three_d{
	private:
		int x,y,z;
	public:
		three_d(){x=0;y=0;z=0;
		}
		void set_xyz(int a,int b,int c){
		x=a;y=b;z=c;
		};
		void display();
};

void three_d::display(){
	cout<<"The coordinates are: "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
int main(){
	int x,y,z;
	three_d n;
	cout<<"Without intialization the structure :\n";
	n.display();
	cout<<"Enter the x,y,z coordinates: ";
	cin>>x>>y>>z;
	three_d t;
	t.set_xyz(x,y,z);
	t.display();
	cin.ignore();
	cin.get();
	return 0;
}
