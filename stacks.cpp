#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top;

    Stack(int size){
        arr  = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data){
        if(top == size-1){
            cout<<"stack is full";
            return;
        }
        else{
            arr[++top] = data;
        }
    }
    void pop(){
        if(top ==-1){
            cout<<"no element is present:";
            return ;

        }
        else{
            top--;
        }
    }
    int getsize(){
        return top+1;
    }
    int gettop(){
        return arr[top];
    }
    void print(){
        for(int i =0;i<getsize();i++){
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
        cout<<"top element is: "<<gettop()<<endl;
        cout<<"total size is :"<<getsize()<<endl;
    }


};

int main(){
    Stack st(5);
    st.push(14);
    st.push(45);
    st.push(456);
    st.push(23);
    st.print();

    st.pop();
    st.print();

    return 0;

}