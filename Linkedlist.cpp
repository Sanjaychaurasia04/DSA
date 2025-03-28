#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(){
            this->next  =NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
void print(Node* head){
    Node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
void getlength(Node* head){
    Node* temp = head;
    int len =0;
    while(temp !=NULL){
        len++;
        temp =temp->next;
    }
    cout<<"total length of the linked list is :"<<len<<endl;
}
void insertathead(Node* &head , int data){
    if(head ==NULL){
        Node* newNode = new Node(data);
        newNode ->next = NULL;
        head = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;

    }
}
void insertattail(Node* &tail ,Node* &head , int data){
    if(tail ==NULL){
        Node* newNode = new Node(data);
        head = newNode ;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
    
}
void insertatanyposition(Node* &head , Node* &tail,int position,int data){
    if(position ==1){
        insertathead(head , data);
    }
    int count =0;
    Node* newNode = new Node(data);
    Node* curr = head;
    Node* prev = NULL;
    while(curr !=NULL && count<position){
        prev = curr;
        curr = curr->next;
        count++;
    }
    if(curr == NULL){
        insertattail(tail , head,data);
    }
    else{
        prev->next = newNode;
        newNode->next = curr;
    }
}
void deleteathead(Node* &head , Node* &tail){
    if(head ==NULL){
        cout<<"no element id present";
    }
    else if(head ==tail){
        Node* temp =head;
        delete temp;
        head->next = NULL;
        tail ->next = NULL;
    }
    Node* temp =head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
}
int main(){
    Node* first = new Node(10);
    Node* second  =new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next =fourth;
    fourth->next = NULL;

    Node* head = first;
    Node* tail = fourth;
   
    insertathead(head , 45);
   
    insertattail(tail ,head , 35);
    
    insertatanyposition(head , tail,2,55);
    print(head);
    cout<<"now deleting the head element :"<<endl;
    deleteathead(head,tail);
    print(head);

    return 0;
}