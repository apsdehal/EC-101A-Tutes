#include <iostream>
using namespace std;
int main() {
	int people, bill;//Declaring bill and no. of people
	cout<<"Enter the no. of people: "<<endl;
	cin>>people;
	cout<<"Enter the amount of bill: "<<endl;
	cin>>bill;// Inputting Bill and People
	//Checking Bill Discount
	if(bill>=51 && bill<=100) bill-=(0.05*bill);
	else if(bill>=101 && bill<=200) bill-=(0.08*bill);
	else if(bill>=201) bill-=(0.10*bill);
	//Apllying Service Tax
	if(people>5 && people<=10) bill+=(0.025*bill);
	else if(people>10 && people<=15) bill+=(0.035*bill);
	else if(people>20) bill+=(0.05*bill);
	//Printing in the final bill 
	cout<<"The final bill is: "<<bill<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
