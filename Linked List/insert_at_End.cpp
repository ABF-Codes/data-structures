#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
    public:

    int value;
    Node* next;

    
    Node(int data){
        value=data;
        next=NULL;
    }

    

};

void insertAtHead(Node* &head,int val){
        Node* newNode= new Node(val);
        newNode->next = head;
        head = newNode;
    }
void insertAtEnd(Node* head,int val){
    Node* newNode = new Node(val);

    Node* temp = head;
    while(temp->next!=nullptr){
         temp=temp->next;
    }
        temp->next=newNode;
       
        

}
    void display(Node* head){
       Node* temp = head;
       while(temp!= nullptr){
        cout<<temp->value<<"->";
       temp=temp->next;
       }
       cout<<"Null"<<endl;
    }
    
int main(){

    Node* head=NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,7);
    display(head);
    insertAtEnd(head,13);
    display(head);
    return 0;
}