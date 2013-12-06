#include <iostream>
using namespace std;
class person{
      public:
                string name;
      
             person(string s):name(s){}
             };
class student: public person{
      protected:
                string k;
      public:
            student(string s, string m){name=s;k=m;}
            };
                                    
                       
