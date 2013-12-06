#include <iostream>
using namespace std;//Anybody here I don't know what the q. actually wants so I made classes friend for full aceess or other way round is to make the variables protected
class one_d{
	private:
		int x;
	public:
	void set_coord(int a){
		x=a;
	}	
	virtual void display_coord(){
		cout<<"x coordinate is: "<<x<<endl;
	}
	friend class two_d;
	friend class three_d;
};
class two_d: public one_d{
	private:
		int y;
	public:
	void set_coord(int a, int b){
		x=a;y=b;
	}	
	void display_coord(){
		cout<<"x is: "<<x<<"\ty is: "<<y<<endl;
	}
	friend class three_d;
};
class three_d: public two_d{
	private:
		int z;
	public:
	void set_coord(int a,int b,int c){
		x=a;y=b;z=c;
	}	
	void display_coord(){
		cout<<"x is: "<<x<<"\ty is: "<<y<<"\tz is: "<<z<<endl;
	}
};
int main(){
	one_d a;
	two_d b;
	three_d c;
	one_d *k =&a;
	a.set_coord(4);
	k->display_coord();
	k=&b;
	b.set_coord(4,5);
	k->display_coord();
	k=&c;
	c.set_coord(4,5,6);
	k->display_coord();
	cin.get();
	return 0;
}
