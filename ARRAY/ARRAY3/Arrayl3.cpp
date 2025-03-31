#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort_zeros_ones(vector<int>& a){
    int countzero =0;
    int countones =0;
    for(int i =0;i<a.size();i++){
        if(a[i] == 0) countzero++;
        else countones++;
    }
    for(int i =0;i<a.size();i++){
        if(countzero>i)
        cout<<0;
        else cout<<1;
    }
}
// void swap(vector<int>& c ,int d,int e){
//     int temp =c[d];
//     c[d] =c[e];
//     c[e] = temp;
// }
void two_pointer_approach(vector<int>& b){
    int i =0;
    int j =b.size()-1;
    while(i<=j){
        if(b[i]==1 && b[j]==0){
            std::swap(b[i],b[j]);
            i++;
            j--;
        }
        if(b[i]==0) i++;
        if(b[j]==1) j--;
    }
    for(int i =0;i<b.size();i++){
        cout<<b[i];
    }
}

void move(vector<int>& c){
    for(int i =0 ;i<c.size();i++){
        int j=c.size()-1;
        if(c[j]<0 && c[i]>0){
            swap(c[j],c[i]);
            j--;
            i++;
        }
        else if(c[i]<0) i++;
        else j--;
    }
    for(int i =0;i<c.size();i++){
        cout<<c[i];
    }
}
int main(){
    vector<int>V;
    int size;
    cout<<"enter size";
    cin>>size;
    cout<<"enter the input : ";
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        V.push_back(x);
    }
//Question 1 : sort the arrays of "0" and "1"

//METHOD 1 : BY COUNTING NUMBER OF ZEROS AND ONES
   // sort_zeros_ones(V);

//METHOD2 : TWO POINTER APPROACH
    
    //two_pointer_approach(V);


//Question 2 : Move all the negative number to beginning and positive number to the end

    move(V);

    return 0;
}