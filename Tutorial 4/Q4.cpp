#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream read;
	int n;
	read.open("output_nos.txt");
	for(int i=0;i<10;i++){
		cin>>n;
		read<<n<<" ";
	}

	read.close();
	cin.get();
	cin.ignore();
	return 0;
	
}
