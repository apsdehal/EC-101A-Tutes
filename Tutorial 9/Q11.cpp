#include<fstream>
#include <iostream>
using namespace std;
class Account{
      private:
              int AccountCount;
              string Name;
              char Type;
              int AccountNumber;
              double BalanceAmount;
      public:
             Account(){
                       static int p;
                       ++p;AccountCount=p;
                       }
             void AccountOpening(){
                  cout<<"Enter the Name: ";
                  cin>>Name;
                  cout<<"Enter the Account type: ";
                  cin>>Type;
                  cout<<"Enter Intial Balance: ";
                  cin>>BalanceAmount;
                  while(BalanceAmount<1000){ cout<<"Enter the amount greater than 1000: "<<endl;
                  cin>>BalanceAmount;}
                  AccountNumber=AccountCount;}
             double deposit(double d){
                    BalanceAmount+=d;
                    return BalanceAmount;}
             bool withdraw(double w){
                  if(BalanceAmount-w>1000){
                                          BalanceAmount-=w;
                                          return true;}
                  else {cout<<"balance amount can't be less than 1000"<<endl;
                  return false; }
                  }
             double getBalance(){return BalanceAmount;}
             friend ostream & operator <<(ostream &out,const Account a){
                     out<<"Name is : "<<a.Name<<"\nAccount No is : "<<a.AccountNumber<<"\nType is : "<<a.Type<<"\nBalance is: "<<a.BalanceAmount<<endl; }
             void Transfer(Account a, double b){
                  if(a.withdraw(b)) deposit(b);}        
                                                     
                  };
#include <iostream>
using namespace std;
                  
                             
int main(){
    Account a;
    a.AccountOpening();
    Account b;
    cout<<a;
    b.AccountOpening();
    cout<<b;
    a.deposit(1000);
    cout<<a;
    b.withdraw(1000);
    a.withdraw(100);
    cout<<a<<b;
    cout<<"Balance in object 1 is: "<<a.getBalance();
    b.Transfer(a,500);
    cout<<a<<b;
    cin.get();
    cin.ignore();
    
    
    return 0;}                               
