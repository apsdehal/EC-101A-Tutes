#include <iostream>
using namespace std;
struct Time{
	int hours;
	int minutes;
	int seconds;
};

void setTime(Time &t){
	cout<<"Enter the time as follows : "<<endl;
	cout<<"    Hours: ";
	cin>>t.hours;
	cout<<"    Minutes: ";
	cin>>t.minutes;
	cout<<"    Second: ";
	cin>>t.seconds;
}
void displayTime(Time t){
	cout<<"Time stored in the structure is: "<<t.hours<<":"<<t.minutes<<":"<<t.seconds<<endl;
}
int main(){
	Time t;
	setTime(t);
	displayTime(t);
	cin.ignore();
	cin.get();
	return 0;
}
