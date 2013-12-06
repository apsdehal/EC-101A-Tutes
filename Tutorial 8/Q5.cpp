#include <iostream>
using namespace std;
class three_d{
	private:
		int x,y,z;
	public:
		void set_x(int a){
			x=a;
		}
		void set_y(int b){
			y=b;
		}
		void set_z(int c){
			z=c;
		}
		three_d(int ,int ,int);
		void display();
};

three_d::three_d(int a,int b,int c){
	set_x(a);
	set_y(b);
	set_z(c);
}
void three_d::display(){
	cout<<"The coordinates are: "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
int main(){
	int x,y,z;
	cout<<"Enter the x,y,z coordinates: ";
	cin>>x>>y>>z;
	three_d t(x,y,z);
	t.display();
	cin.ignore();
	cin.get();
	return 0;
}
