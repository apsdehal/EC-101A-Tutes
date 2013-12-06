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

#include <iostream>
using namespace std;
int main(){
    Point A(2.3,5.0);
    Point D(4,6);
    cout<<A;
    cout<<D;
   cout<<"A is at distance: "<<A.distance(D)<<endl;
    cout<<"Distance between A and D: "<<A-D<<endl;
    A.shift(0,0);
    cout<<A;
    cin.get();
    cin.ignore();
    return 0;
    }
    
                                      
