#include <iostream>
using namespace std;
class Time{
	private:
		int hours,minutes,seconds;
	public:
		void setTime(int a,int b,int c){
			hours=a;
			minutes=b;
			seconds=c;
		}
		void displayTime(){
			cout<<"The Time is: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
};
int main(){
	Time t;
	int a,b,c;
	cout<<"Enter the hours, times and minutes: ";
	cin>>a>>b>>c;
	t.setTime(a,b,c);
	t.displayTime();
	cin.ignore();
	cin.get();
	return 0;
}
