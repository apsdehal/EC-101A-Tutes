#include <iostream>//Obviously it can see that the set_dim function can be overloaded accordingly
using namespace std;
class figure{
	protected:
		double x,y;
	public:
		void set_dim(double i, double j){
			x=i;y=j;
		}
		virtual void show_area()=0;
};
class rectangle: public figure{
	public:
	//void set_dim(double i, double j){
	//	x=i;y=j;
	//}
	void show_area(){
		cout<<"The area is rectangle : "<<x*y<<endl;
	}
};
class triangle: public figure{
	public:
	//void set_dim(double i, double j){
	//	x=i;y=j;
	//}
	void show_area(){
		cout<<"The area is triangle: "<<0.5*x*y<<endl;
	}
};
int main(){
	rectangle a;
	triangle b;
	a.set_dim(3,4);
	b.set_dim(3,4);
	a.show_area();
	b.show_area();
	cin.get();
	return 0;
}
