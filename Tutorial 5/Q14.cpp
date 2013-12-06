#include <iostream>
using namespace std;
int gcf(int a, int b);

int main() {
	int p;
	int q;
	cout << "Enter the nos. to calculate the GCF\n";
	cout << "1.";
	cin >> p;
	cout <<"2.";
	cin >> q;
	cout << "GCF is:"<<gcf(p,q)<<endl;
	cin.get();
	cin.ignore();
	return 0;
}

int gcf(int a, int b) {
	if(b == 0) {
		return a;
	} else {
		return gcf(b, a % b);
	}

}

