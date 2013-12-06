#include <iostream>
using namespace std;
class listnode{
      private:
             int data;
             listnode *next;
      public:
             listnode(int d){
                  data = d; 
                  next = NULL;
             }
      friend class list;
};

class list{
      private:
              listnode *start;
      public:
             list(){start = NULL;}
             int removeFront();
             void insertBack(int d);
             void display();
};

void list::display(){
     if(start == NULL) cout<<"List is empty"<<endl;
     else {
          listnode *current = start;
          while(current != NULL){
               cout<<current -> data<<" ";
               current = current -> next;
          }
     }
}

int list::removeFront(){
    if(start == NULL) return -1;
    else {
         listnode *temp;
         temp = start;
         int item = start -> data;
         start = start -> next;
         delete temp;
         return item;
    }
}

void list::insertBack(int d){
     listnode *temp = new listnode(d);
     listnode *current = start;
     if (start == NULL) {
          start = temp;
          return;
     }
     while(current -> next != NULL){
          current = current -> next;
     
     current -> next = temp;}
} 
         

int main()
{
    list object;
    object.display();
    object.insertBack(23);object.insertBack(43);
    object.insertBack(73);object.insertBack(13);
    object.display();
    cout<<endl<<"List after removing first element: ";
    object.removeFront();
    object.display();
    cin.ignore();
    cin.get();
    return 0;
}
