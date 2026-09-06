#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    node* first = new node();
    node* second = new node();
    node* third = new node();

     first->data=10;
     second->data=20;
     third->data=30;

     first->next=second;
     second->next=third;
     third->next=nullptr;

     cout<<"First Node Data : "<<first->data<<" , "<< "Address of first Node :"<<first<<" , "<<"First node points to :"<<first->next<<endl;
     cout<<"Second Node Data : "<<second->data<<" , "<< "Address of 2nd Node :"<<second<<" , "<<"Second node points to :"<<second->next<<endl;

    return 0;
}