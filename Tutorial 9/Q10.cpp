#include <fstream>
#include <cmath>
using namespace std;
class Point{
      friend ostream& operator << (ostream &out,const Point &p){
             out<<"["<<p.x<<","<<p.y<<"]"<<endl;}
      private:
              float x,y;
      public:
             Point(){x=0;y=0;}
             Point(float a,float b){x=a;y=b;} 
             double operator -(const Point &p){
                    return sqrt(((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y)));} 
             void shift(float r, float theta){
                  x=x+r*cos(float(theta*3.1415)/180);y=y+r*sin(float(theta*3.1415)/180);}
                  int distance(Point p){
                    return (int)sqrt(double((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y)));}
             };
class Circle:public Point{
      friend ostream& operator <<(ostream &out, const Circle &c){
             out<<"x^2 + y^2 = "<<c.radius*c.radius<<endl;}
      int radius;
      public:
             Circle():radius(1){}
             bool insideCircle(Point p){
                  Point a(0,0);
                  return p.distance(a)<=1;}};
#include <iostream>
int main(){
    Point p(0.5,0.5);
    Point q(0,0);
    Point r(1,0);
    Point s(2,0);
    Circle c;
    cout<<"c is: "<<c<<"p is: "<<p<<"q is: "<<q<<"r is: "<<r<<"s is: "<<s;
    cout<<"Is p inside? "<<endl<<c.insideCircle(p)<<endl;
    cout<<"Is q inside? "<<endl<<c.insideCircle(q)<<endl;
    cout<<"Is r inside? "<<endl<<c.insideCircle(r)<<endl;
    cout<<"Is s inside? "<<endl<<c.insideCircle(s)<<endl; 
    cin.ignore();
    cin.get();
    return 0;}                              
