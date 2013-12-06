#include <iostream>
using namespace std;
struct StudentRec {
       string name;
       int rollno;
       float attendancePerc;
       char grade;
       };
int main() {
    StudentRec firstStudent = {"Amanpreet", 92, 99.4, 'A'};
    StudentRec secondStudent = {"Anupam",98,99.2,'A'};
    cout<<firstStudent.name<<" "<<firstStudent.rollno<<" "<<firstStudent.attendancePerc<<" "<<firstStudent.grade<<endl;

    cout<<secondStudent.name<<" "<<secondStudent.rollno<<" "<<secondStudent.attendancePerc<<" "<<secondStudent.grade<<endl;
    cin.ignore();
    cin.get();return 0;}
