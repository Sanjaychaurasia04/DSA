#include<iostream>
#include<stack>
using namespace std;

void reversestring(string str,int size){
    
    stack<char>st;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        st.push(ch);
    }
    while(!st.empty()){
        cout<<st.top();
        
        st.pop();
    }
    
}
//remove the middle ekement in the string
void solve(stack<int>st ,int len,int &ans){
    if(len ==1){
        ans =st.top();
        return;
    }
    len--;
    int  temp =st.top();
    st.pop();
    solve(st,len,ans);
    st.push(temp);
}

int length(stack<int>&str ){
    int leng = str.size();
    int len =0;
    if(str.empty()){
        return -1;
    }
    if(leng%2==0){
        len = leng/2;
    }
    else{
        len = leng/2 +1;
    }
    
    int ans =-1;
    solve(str,len,ans);
    return ans;
}

//insert at the bottom of the stack

void insertatbottom(stack<int>&st , int data,int pos){
    // int pos =st.size()-1;
    if(pos ==0){
        st.push(data);
        return;
    }
    pos--;
    int temp = st.top();
    st.pop();
    insertatbottom(st,data,pos);
    st.push(temp);
}
void reverse(stack<int>st,int pos){
    int len = st.size();
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverse(st,pos);
    cout<<temp<<"   ";
    st.push(temp);
}
//insert element in sorted stack 
void sorted(stack<int> &st ,int data){
    if(st.empty() || st.top()<data){
        st.push(data);
        return;

    }
    int temp = st.top();
    st.pop();
    sorted(st,data);
    st.push(temp);
}
//vlaid parenthesis
bool validparenthesis(string str){
    stack<char>st;
    for(int i=0;i<str.length();i++){
        char br =str[i];
        if(br =='('||br =='{'||br =='[' ){
            st.push(br);
        }
        else{
            if(!st.empty()){
                if(br ==')' && st.top() =='('){
                    st.pop();
                }
                else if(br =='}' && st.top() =='{'){
                    st.pop();
                }
                else if(br ==']' && st.top() =='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
void print(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    string str = "babbar";
    int size = str.length();
    reversestring(str ,size);
    cout<<endl;

    stack<int>st;
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(23);
    st.push(3123);
    // sorted(st,89);
    // print(st);
    string str1 = "(({[({)}))";
    bool ans = validparenthesis(str1);
    cout<<ans;
    // insertatbottom(st,230,st.size());
    // cout<<"before reverse:";
    // print(st);
    // cout<<endl;
    // cout<<endl;
    // reverse(st,st.size());
    // cout<<endl;
    // print(st);
    // int ans = length(st);
    // cout<<ans;

   
    return 0;
}