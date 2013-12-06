#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream read;
	int n,sum=0,i=0;
	read.open("input_nos.txt");
	cout<<"The nos. are :" ;
	while(!read.eof()){
		read>>n;
		cout<<n<<" ";
		sum+=n;
		i++;
	}
	read.close();
	cout<<"\nThe sum is "<<sum<<endl;
	cout<<"The average is "<<((float)sum/(i))<<endl;
	cin.get();
	cin.ignore();
	return 0;
	
}
