#include <iostream>
using namespace std;
struct studentRec {
	int enrolNo;
	float CGPA;
	string branch;
};
void print(studentRec student[],int n){
	for(int i=0;i<n;i++){
		cout<<"For structure no. "<<i+1<<":"<<endl;
		cout<<"      Enrollment No.: "<<student[i].enrolNo<<endl;
		cout<<"      CGPA : "<<student[i].CGPA<<endl;
		cout<<"      Branch is : "<<student[i].branch<<endl;
	}
}
void sort (studentRec student[],int n){
	int key=0;
	for(int i=1;i<n;i++){
		if(student[i].CGPA<student[key].CGPA){
			swap(student[i],student[key]);
			key=i;
		}
	}
}
int main(){
	studentRec student[3];
	for(int i=0;i<3;i++){
		cout<<"For structure no. "<<i+1<<endl;
		cout<<"     Enter the enrolment no : ";
		cin>>student[i].enrolNo;
		
		cout<<"     Enter the CGPA : ";
		cin>>student[i].CGPA;
		
		cout<<"     Enter the branch : ";
		cin>>student[i].branch;
	}
	cout<<"\n\n\n\nUnsorted Structures are: "<<endl;
	print(student,3);
	sort(student,3);
	cout<<"\n\n\n\nSorted Structures are: "<<endl;
	print(student,3);
	cin.ignore();
	cin.get();
	return 0;
}
