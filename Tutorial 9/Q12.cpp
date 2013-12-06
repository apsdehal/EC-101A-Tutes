#include <iostream>
using namespace std;
class Circle{
      private:
              double r;
      public:
             Circle(double k):r(k){}
             double area(){
                   return 3.1415*r*r;}
             virtual double Volume()=0; };
class Cone:public Circle{
       private:
               double h;
       public:
              Cone(double p, double q):Circle(p),h(q){}
              double Volume(){
                     return area()*h/3;
                     }
               void display_Volume(){
                    cout<<"Volume is: "<<Volume();
                    }};
int main(){
    int p,q;
    cout<<"Enter the radius and height: ";
    cin>>p>>q;
    Cone r(p,q);
    r.display_Volume();
    cin.get();
    cin.ignore();
    return 0;                         
}                                              
