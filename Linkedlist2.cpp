#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev =NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;

}
void insertathead(Node* &head,Node* &tail ,int data){
    if(head ==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        

    }
    else{
        Node* newNode = new Node(data);
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        
    }
    

}
int main(){
    Node* first = new Node(10);
    Node* sec = new Node(20);
    Node* third = new Node(30);
    Node* four = new Node(40);
    Node* five = new Node(50);

    first->prev = NULL;
    first->next = sec;
    sec->next = third;
    sec->prev = first;
    third->prev = sec;
    third->next = four;
    four->prev = third;
    four->next = five;
    five->prev = four;
    five->next = NULL;

    Node* head = first;
    Node* tail = five;
    insertathead(head,tail,455);
    print(head);


    return 0;
}