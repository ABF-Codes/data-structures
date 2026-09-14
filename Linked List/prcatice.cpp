#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data =val;
        next=NULL;
    }

};
class LL{
private:
    Node* head;
    Node* tail;
public:
    LL(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return ;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL ){
            head = tail = newNode;
            return ;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"Linked List is Empty"<<endl;
            return ;

        }
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout<<"Linked List is Empty"<<endl;
            return ;
        }

        if(head == tail){
            delete head;
            head = tail = NULL;
            return ;
        }

        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val,int pos){
        if(pos < 0){
            cout<<"Invalid Position"<<endl;
            return ;
        }
        if(pos == 0){
            push_front(val);
            return ;
        }

        Node* temp = head;
       for(int i=0;i<pos - 1;i++){
        if(temp == NULL){
            return ;
        }
        temp=temp->next;
       }
       Node* newNode = new Node(val);
       newNode->next=temp->next;
       temp->next=newNode;
    }
    int search(int key){
        Node* temp = head;
        int idx=0;
        if(head == NULL){
            cout<<"Linked List is Empty"<<endl;
        }
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            idx++;
            temp= temp->next;
        }
        return -1;
    }
    void print_List(){
        Node* temp =head;
        while ( temp != NULL){
            cout<<temp->data<<"->";
            temp= temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
int main(){
    LL l1;
      l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);
    l1.push_back(40);

    l1.print_List();
    l1.pop_front();
    l1.print_List();
    l1.pop_back();
    l1.print_List();
    l1.insert(52,1);
    l1.print_List();
    cout<<l1.search(52);
    return 0;

}