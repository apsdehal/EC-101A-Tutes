#include <iostream>
using namespace std;
class polygon{
	protected:
		double x,y;
	public:
		polygon(double i, double j):x(i),y(j){}
		virtual void print_area()=0;
};
class rectangle: public polygon{
	public:
	rectangle(double i, double j):polygon(i,j){
	}	
	void print_area(){
		cout<<"The area is rectangle : "<<x*y<<endl;
	}
};
class triangle: public polygon{
	public:
	triangle(double i, double j):polygon(i,j){
	}
	void print_area(){
		cout<<"The area is triangle: "<<0.5*x*y<<endl;
	}
};
int main(){

         rectangle r (4, 5);
         triangle t (4, 5);
         polygon *p1 = &r;//base class pointer declared and initialized
         polygon *p2 = &t;
         p1->print_area( );
         p2->print_area( );
         cin.get( );
         return 0;

}
