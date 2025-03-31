#include<iostream>
#include<vector>
using namespace std;

//LEETCODE 2149
//rearrange the array element one positive and one negative like that
// 1  -3  2  -4  5
void reaggange(int arr[],int size){
    int posindex =0;
    int negindex =1;
    vector<int> arr1(size ,0);
    for(int i =0;i<size;i++){
        if(arr[i]>0){
            arr1[posindex] = arr[i];
            posindex +=2;
        }
        else{
            arr1[negindex] =arr[i];
            negindex +=2;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<"  ";
    }

}
void print (int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}

//LEETCODE 724
//PIVOT INDEX
void pivot(int arr[],int size){
    //leftsum
    int leftsum =0;
    int rightsum =0;
    for(int i=0;i<size;i++){
        leftsum +=arr[i];
    }
    for(int i =0;i<size;i++){
        leftsum -= arr[i];
        if(leftsum ==rightsum){
            cout<<"index is :"<<i;
        }
        rightsum +=arr[i];
    }
}
//find the duplicate element 
void duplicate(int arr[],int size){
    int sum =0;
    for(int i =0;i<size;i++){
        
    }
}
int main(){
    int size =6;
    int arr[6] ={1,7,3,6,5,6};
    // reaggange(arr ,size);
    // print(arr,size);
    pivot(arr,size);
    
    return 0;
}