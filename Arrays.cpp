#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void count (int arr[] , int size){
    int countzero = 0;
    int countone = 0;
    for(int i =0;i<size;i++){
        if(arr[i] == 0) countzero++;
        else countone++;
    }
    cout<<countone<<endl;
    cout<<countzero<<endl;
    while(countone--){
        cout<<1<<"  ";
    }
    while(countzero--){
        cout<<0<<"  ";
    }
}
void minimum(int arr[] , int size){
    int mini = INT_MAX;
    for(int i =0;i<size;i++){
        if(mini>arr[i]){
            mini = arr[i];
        }
    }
    cout<<"minimum is :"<<mini;
    int maxi =INT_MIN;
    for(int i =0;i<size;i++){
        if(maxi <arr[i]){
            maxi = arr[i];
        }
    }
    cout<<"Maximum is :"<< maxi<<endl;
}
void reverse(int arr[] , int size){
    int start =0;
    int end = size-1;
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i =0;i<size;i++){
         cout<<"reverse array is :"<<arr[i]<<endl;
    }
}
void extremepoint(int arr[],int size){
    int start = 0;
    int end = size-1;
    for(int i =0;i<size;i++){
        if(i%2==0){
            cout<<arr[start]<<"  ";
            start++;
        }
        else{
             cout<<arr[end]<<"  ";
             end--;
        }
    }
    cout<<endl;
}
int unique(int arr[],int size){
    int ans =0;
    for(int i =0;i<size;i++){
        ans ^= arr[i];
    }
    return ans;
}
void pairs(int arr[],int size){
    for(int i =0;i<size;i++){
        for(int j =0;j<=size-1;j++){
            cout<<arr[i]<<","<<arr[j]<<"  ";
        }
        cout<<endl;
    }
}
void shift(int arr[], int size){
    int temp = arr[size-1];
    for(int i =size-1;i>0;i--){
        arr[i] =arr[i-1];
    }
    arr[0] = temp;
    cout<<"shift one element from right to left:";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
void shift2(int arr[],int size){
    int temp = arr[0];
    for(int i =0;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
    cout<<endl<<"shift one left to right";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
void rowsum(int arr[][3] ,int row,int col){
    for(int i =0;i<row;i++){
        int sum =0;
        for(int j =0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<sum<<"  ";
    }
}
void colsum(int arr[][3],int row , int col){
    for(int i =0;i<col;i++){
        int sum =0;
        for(int j = 0;j<row;j++){
            sum += arr[j][i];
        }
        cout<<sum<<"  ";
    }
    cout<<endl;
}
void diagonalsum(int arr[][3] , int row, int col){
    int sum =0;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(i==j){
                sum += arr[i][j];
            }
        }
    }
    cout<<"sum of diagonal is "<<sum<<endl;
    cout<<endl<<"opposite diagonal sum:";
    sum =0;
    for(int i =0;i<row;i++){
        for(int  j=0;j<col;j++){
            if(i+j == (col-1)){
                sum += arr[i][j];
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<"oppposite diagoanl element sum is :"<<sum<<endl;
}

void transpose(int arr[][3] ,int row, int col){
    for(int i =0;i<row;i++){
        for(int  j=0;j<col;j++){
            swap(arr[i][j] ,arr[j][i]);
        }
    }
    for(int i= 0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void rearrange(int arr[] ,int size){
    int positive =0;
    int negative = 1;
    vector<int>ans(size+1,0);
    for(int i =0;i<size;i++){
        if(arr[i]>0){
            ans[positive] = arr[i];
            positive += 2;
        }
        else{
            ans[negative] = arr[i];
            negative += 2;
        }

    }
    
    cout<<"AFTER REARRANGE OF AARAY :";
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }
}

int pivot(int arr[] , int size){
    int leftsum =0;
    int rightsum =0;
    for(int i =0;i<size;i++){
        leftsum += arr[i];
    }
    for(int i =0;i<size;i++){
        leftsum -=arr[i];
        if(rightsum == leftsum){
            return i;
        }
        rightsum +=arr[i];
    }
    return -1;
}

int main(){
    int arr[] ={0,1,0,1,0,1,0,1};
    int arr1[]={12,34,534,123,53,35,4233,245};
    int arr2[]={2,10,11,13,10,2,16,13,16};
    int arr3[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr4[]={3,1,-2,-5,2,-4};
    int arr5[] ={1,7,3,6,5,6};
    int ans1 = pivot(arr5  ,6);
    cout<<ans1<<endl;
    rearrange(arr4 , 6);
    int row =3;
    int col = 3;
    int size = 8;
  
    transpose(arr3, row ,col);
    diagonalsum(arr3 , row, col);
    rowsum(arr3 , 3,3);
    colsum(arr3 , 3, 3);
    shift2(arr2 , 9);
    shift(arr2 , 9);
    pairs(arr1,size);
    int ans = unique(arr2,9);
    cout<<ans<<endl;
    extremepoint(arr1,size);
    reverse(arr1,size);
    minimum(arr1,size);
    count(arr , size);

    return 0;
    
}