#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:

    List(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head  == NULL){
            head= tail = newNode;
            return ;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void print_List(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<endl;
            temp=temp->next;   
        }
    }

};
int main(){
    List l1;
    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    l1.print_List();
    return 0;
}