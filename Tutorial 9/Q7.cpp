#include <fstream>
using namespace std;
class Marks{
      friend ostream & operator << (ostream &out,const Marks &k){
             return out<<"The score is "<<k.x<<" out of "<<k.y<<endl; }
      private:
              int x,y;
      public:
             Marks(int p=0,int q=0):x(p),y(q){}
             Marks(const Marks &r):x(r.x),y(r.y){}
             Marks& operator + (int N){
                    if(x+N<=y){
                    x=x+N;}
                    return *this;}
             Marks operator +(const Marks &r){
                    Marks temp;
                    temp.x=x+r.x;
                    temp.y=y+r.y;
                    return temp;}
             void changeScore(int m){
                  if(m<=y) x=m;}
             bool operator >= (const Marks &k){
                  return x*k.y>=y*k.x;}};
#include <iostream>                  
int main(){
    Marks top1(3,10);
    cout<<top1;
    top1+11;
    cout<<top1;
    top1+1;
    cout<<top1;
    Marks top2(5,10);
    Marks top3(1,10);
    cout<<top2;
    cout<<top3;
    if(top1>=top3) cout<<"top1 is greater"<<endl;
    else cout<<"top3 is greater"<<endl;
    if(top1>=top2) cout<<"top1 is greater"<<endl;
    else cout<<"top2 is greater"<<endl;
    top3=top1+top2;
    cout<<top3;
    top3.changeScore(1);
    cout<<top3;
    cin.get();
    cin.ignore();
    return 0;}
    
    
    
                      
                                     
                     
