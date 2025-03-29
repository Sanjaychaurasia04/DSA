#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* mergeLL(Node* &headA , Node* &headB){
    if(headA == NULL) return headB;
    if(headB == NULL) return headA;
    Node* tempa = new Node(-1);
    Node* temp =tempa;

    while(headA != NULL && headB != NULL){
        if(headA->data <= headB->data){
            temp ->next = headA;
            temp = headA;
            headA = headA->next;
        }
        else{
            temp ->next = headB;
            temp = headB;
            headB = headB->next;
        }
        
    }
    if(headA != NULL){
        temp->next = headA;
    }
    if(headB != NULL){
        temp->next = headB;
    }
    return tempa->next;
}
Node* getmid(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL){
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast->next;
            slow = slow ->next;
        }
    }
    return slow;
}
Node* sorted(Node* head){
    if(head ==NULL || head->next ==NULL) return head;
    
    Node* mid = getmid(head);
    Node* left  = head;
    Node* right = mid->next;
    mid->next =NULL;
    left = sorted(left);
    right = sorted(right);
    Node* ans = mergeLL(left , right);
    return ans;


}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* first = new Node(1);
    Node* second = new Node(35);
    Node* third = new Node(5);

    first->next = second;
    second->next = third;
    third ->next = NULL;
    
    Node* one  =new Node(2);
    Node* two = new Node(45);
    Node* three = new Node(5);
    Node* four =new Node(67);
    
    one ->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    Node* headA = first;
    Node* headB = one;
    Node* mergedhead = mergeLL(headA , headB);
    print(mergedhead);

    
    cout<<endl;
    Node* mergedhead1 = sorted(mergedhead);
    print(mergedhead1);


    return 0;
}