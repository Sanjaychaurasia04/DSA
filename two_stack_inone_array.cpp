#include<iostream>
using namespace std;
// implement two stacks in one array

class Stack{
    public:
    int* arr;
    int top1;
    int top2 ;
    int size;

    Stack(int size){
        arr = new int[size];
        this->top1 = -1;
        this->top2 = size;
        this->size = size;
    }
    void push1(int data){
        if(top2 - top1 <1){
            cout<<"overflow";
            return;
        }
        else{
            arr[++top1] =data;
        }
    }
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    

    void push2(int data){
        if(top2 - top1<1){
            cout<<"overflow";
            return;
        }
        else{
            arr[--top2] =data;
        }
    }
    int pop2(){
        if(top2 <size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
    
    void print(){
        for(int i =0;i<top1+1;i++){
            cout<<arr[i]<<"  ";
        }
       
        for(int i =top2;i<size;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<endl<<endl;
        
    }

};

int main(){
    Stack st(4);
    st.push1(23);
    st.push1(34);;
    st.push2(234);
    st.push2(456);
    st.print();
    st.pop2();
    st.print();

    return 0;
}