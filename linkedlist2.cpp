#include<iostream>
using namespace std;
  class node{
      public:
          int val;
          node*next;
           node(int newval){
                      val=newval;
                      next=NULL;
                      }
            };
  class linkedlist{
        public:
             node*head;
             linkedlist(){
                       head=NULL;
                        }
         void insert(int newval){
                 node*temp=new node(newval);
                 temp->next=head;
                 head=temp;
                 }
          void delet(){
                 node*current=head;
                 head=head->next;
                 delete current;
                 }
          void display(){
                 node*current=head;
                 while(current!=NULL){
                              cout<<current->val<<"->";
                              current=current->next;
                               }
                 cout<<"NULL"<<endl;
                 }
           int countitem(){
                node*current=head;
                int count=0;
                while(current!=NULL){
                              count++;
                              current=current->next;
                               }
                return count;
                 }
            node*getpos(int pos){
                     node*current=head;
                     int cnt=0;
                     while(cnt<(pos-1)){
                                    current=current->next;
                                     cnt++;
                                     }
                     return current;
                     }
            void insertat(int newval,int pos){
                                     if(pos < 1||(pos > (countitem()+1))){
                                              cout << "this position is invalid" <<endl;
                                              return;
                                               }
                                      node*current = getpos(pos-1);
                                      if(pos==1)
                                         insert(newval);
                                      else{
                                           node*temp=new node(newval);
                                           temp -> next= current -> next;
                                           current -> next = temp;
                                           }
                                       }
            void deleteat(int pos){
                             if(pos<1||(pos>(countitem()+1))){
                                          cout<<"this position is not valid"<<endl;
                                           return;
                                           }
                             node*current=getpos(pos-1);
                             if(pos==1)
                               delet();
                             else{
                                 node*temp=current->next;
                                  current->next=temp->next;
                                  delete temp;
                                  }
                             }                  
            };
 int main(){
           linkedlist l1;
            for(int i=10; i>0;i--){
                            l1.insert(i);
                             }
             l1.display();
             cout<<"the number of items: "<<l1.countitem()<<endl;
             l1.display();
             l1.insert(55);
             l1.display();
             l1.delet();
             l1.display();
             l1.insertat(10,2);
             l1.display();
             l1.insertat(12,12);
             l1.display();
             l1.deleteat(12);
             l1.display();
             }
             
                             
           


