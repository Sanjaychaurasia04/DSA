#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>& v){
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}

void reverse_part_of_array(vector<int>& a ,int i ,int j){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
        i++;
    }

}
int main(){

    
    vector<int>V;
    int size;
    cout<<endl<<"enter the size of the array ";
    cin>>size;
    for(int i = 0;i<size;i++){
        int z;
        cin>>z;
        V.push_back(z);
    }

// Question 1 Find the last occurence of x in the array
    // int x;
    // cout<<"enter the element :";
    // cin>>x;
    // int last_index =-1;
    // for(int i =0;i<size;i++){     //ishme hum backward bhi travel kar sakte the wo jaada time efficient rahta hum last se traverese karte
    //     if(V[i] == x){
    //         last_index =i;
    //     }
    // }
    // cout<<last_index;


//Queation2 Find the doublet in the array whose sum is equal to the given value x
     //2sum problem

    // int sum =0;
    // int x;
    // cout<<"enter the element to which you want to find doublet";
    // cin>>x;
    // for(int i =0 ;i<size;i++){
    //     for(int j =i+1;j<size;j++){
    //         sum = V[i]+V[j];
    //         if(sum == x){
    //             cout<<i<<","<<j<<"   ";
    //         }
    //     }
    // }


//Question3 write a program to copy the content of one array into another in the reverse order

    // vector<int>V2(V.size());
    // for(int i=0;i<V2.size();i++){
    //    int j = V.size()-1-i;
    //    V2[i] = V[j];
    // }
    // display(V2);


//Question 4 wrirte a program to reverse the array without using any extra array

    // int temp;
    // int j = V.size()-1;
    // for(int i =0;i<=j;i++){
       
    //     temp = V[i];
    //     V[i] = V[j];
    //     V[j]=temp;
    //     j--;
    // }
    // display(V);


//Question5  reverse the part of the array
    // reverse_part_of_array(V,1,4);
    // display(V);

//IMP-->LEETCODEQuestion:  rotate the given array "a " by k steps where k is the size of array "a"
//              NOTE : K CAN BE GREATER THAN SIZE OF ARRAY

    int k;
    cout<<"enter value of k";
    cin>>k;
    if(k>V.size()){
        k = k%V.size();
    }
    reverse_part_of_array(V,0,V.size()-1-k);
    reverse_part_of_array(V ,V.size()-k,V.size()-1);
    reverse_part_of_array(V,0,V.size()-1);

    display(V);
    return 0;
}