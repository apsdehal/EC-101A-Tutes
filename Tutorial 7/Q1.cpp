#include <iostream>
using namespace std;
int main(){
    int first_value;
    int second_value;
    int *mypointer;
    first_value=3;
    second_value=8;
    cout<<" first_value =" <<first_value<<endl;
    
    cout<<" second_value =" <<second_value<<endl;
    mypointer = &first_value;
    *mypointer = 7;
    mypointer = &second_value;
    *mypointer=2;
    cout<<" first_value =" <<first_value<<endl;
    
    cout<<" second_value =" <<second_value<<endl;
    cin.ignore();
    cin.get();
    return 0;}
    
    
