#include <iostream>
using namespace std;
class Volume{
	public:
		Volume(double r){radius=r;pi=3.14159;}
		virtual void displayVolume()=0;
	protected:
	double radius,height;
	double pi;	
};
class Sphere: public Volume{
	public:
	Sphere(double r):Volume(r){pi=3.1415;
	}	
	void displayVolume(){
		cout<<(4/3*pi*radius*radius*radius)<<endl;
	}
};
class Cylinder:public Volume{
	public:
		Cylinder(double r,double h):Volume(r){
			height=h;pi=3.1415;
		}
		void displayVolume(){
			cout<<pi*radius*radius*height <<endl;
		}
};
class Cone:public Volume{
	public:
		Cone(double r,double h):Volume(r){
			height=h;pi=3.1415;
		}
		void displayVolume(){
			cout<<(pi*radius*radius*height/3)<<endl;
		}
};
int main(){
	double r,h;
	cout<<"Enter the radius and height: ";
	cin>>r>>h;
	Sphere x(r);
	Cylinder y(r,h);
	Cone z(r,h);
	cout<<"Volume of sphere: ";x.displayVolume();
	cout<<"Volume of Cylinder: ";y.displayVolume();
	cout<<"Volume of Cone: ";z.displayVolume();
	cin.get();
	return 0;

}
