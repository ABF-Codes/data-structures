#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data= value;
        next=NULL;
    }
};
class LList{
private:
    Node* head;
    Node* tail;
public:
    LList(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }

    }
    
    void print_list(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"->";
            temp= temp->next;
        }
        cout<<"NULL";
    }
};
int main(){
    LList l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(6);
    l1.print_list();
    return 0;
}