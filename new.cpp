#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->next = NULL;
    }
    Node( int data){
        this->data = data;
        this->next = NULL;
    }
};
Node* merge(Node* headA , Node* headB){
    if(headA == NULL) return headB;
    if(headB == NULL) return headA;
    Node* tempa = new Node( -1);
    Node* temp = tempa;
    while(headA != NULL && headB != NULL){
        if(headA->data <= headB->data){
            temp->next = headA;
            temp = temp ->next;
            headA = headA->next;
        }
        else{
            temp ->next = headB;
            temp = temp->next;
            headB = headB->next;
        }
    }
    if(headA != NULL){
        temp ->next = headA;
    }
    if(headB != NULL){
        temp->next = headB;
    }
    return tempa->next;
}
Node* getmid( Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next !=NULL){
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
Node* sorted(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* mid = head;
    Node* left = head;
    Node* right = mid->next;
    mid->next =NULL;
    left = sorted(left);
    right = sorted(right);
    Node* ans = merge(left , right);
    return ans;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* intersection(Node* left1 ,Node* right1){
    Node* left = left1;
    Node* right = right1;
    if(left == NULL || right ==NULL){
        return NULL;
    }
    while(left->next != NULL && right->next != NULL){
        if(left == right){
            return left;
        }
        left = left->next;
        right = right->next;
    }
    if(left->next == NULL){
        int leftcount = 0;
        while(right->next != NULL){
            leftcount ++;
            right =right->next;
        }
        while(leftcount--){
            right1 = right1->next;
        }

    }
    if(right->next == NULL){
        int rightcount = 0;
        while(left->next != NULL){
            rightcount ++;
            left =left->next;
        }
        while(rightcount--){
            left1 = left1->next;
        }

    }
    while(left1 != right1){
        left1 = left1->next;
        right1 = right1->next;
    }
    return left1;
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
    Node* three = new Node(45);
    Node* four =NULL;
    
    one ->next = two;
    two->next = three;
    three->next = four;
    four->next = third;

    

    Node* headA = first;
    Node* headB = one;
    Node* ans = intersection(headA,headB);
    print(ans);
    // Node* mergedhead = merge(headA , headB);
    // print(mergedhead);
    // Node* mergedhead1 = sorted(mergedhead);
    // print(mergedhead1);

    return 0;
}