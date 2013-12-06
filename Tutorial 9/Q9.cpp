#include <fstream>
#include <cmath>
using namespace std;
class Point{
      friend ostream& operator << (ostream &out,const Point &p){
             out<<"["<<p.x<<","<<p.y<<"]"<<" ";}
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
#include <iostream>
using namespace std;
class Triangle{
      private:
              Point p1,p2,p3;
              
      public:
             Triangle(Point a,Point b,Point c):p1(a),p2(b),p3(c){}
             void shift_Triangle(float r, float theta){
                  p1.shift(r,theta);
                  p2.shift(r,theta);
                  p3.shift(r,theta);}
             void display(){cout<<"Coordinates are: "<<p1<<p2<<p3<<endl;} };                         


int main(){Point p1(1,2),p2(3,4),p3(5,6);
    Triangle t(p1,p2,p3);
    t.display();
    t.shift_Triangle(4,60);
    t.display();cin.get();
    cin.ignore();
    return 0;}
