#include<iostream>
using namespace std;

void input(int arr[],int size){
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
}

void print (int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i];
    }
}

void count(int arr[], int size){
    int zerocount =0;
    int onecount =0;
    for(int i =0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }
    }
    cout<<"zerocount is : "<<zerocount<<" , "<<"onecount is :"<<onecount;
}
void minmax(int arr[],int size){
    int min =INT16_MAX;
    for(int i =0;i<size;i++){
        if(arr[i]<min){
            min =arr[i];
        }
    }
    cout<<"minimum is :"<<min;
    int max=INT16_MIN;
    for(int i =0;i<size;i++){
        if(max<arr[i]){
            max =arr[i];
        }
    }
    cout<<"maximum is :"<<max;
}
// void swap(int arr[],int size ,int start, int end){
//     int temp[size];
//     int a =arr[start];
//     int b =arr[end];
//     a =temp;
//     a=b;
//     b=temp;
// }
void reverase(int arr[],int size){
    int start =0;
    int end =size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

void extereme(int arr[], int size){
    int start =0;
    int end =size-1;
    while(start<=end){
        if(start==end){
            cout<<arr[start];
        }
        else{
            cout<<arr[start] <<"  "<<arr[end]<<"  ";
            
        }
        start++;
        end--;
        
    }
    cout<<endl;
}
int uniqueElement(int arr[],int size){
    int num=0;
    for(int i=0;i<size;i++){
        num =arr[i]^num;
    }
    return num;
}

void printallPairs(int arr[], int size){
    for(int i =0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k =0;k<size;k++){
                cout<<arr[i] <<","<<arr[j]<<" ,"<<arr[k]<<"  ";
            }
            
        }
    }
}

void counting(int arr[], int size)
{
    int countzero =0;
    int countone =0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            countzero++;
        }
        if(arr[i]==1){
            countone++;
        }
    }
    int i =0;
    while(countzero--){
        arr[i] =0;
        i++;
    }
    while(countone--){
        arr[i] =1;
        i++;
    }
}
//METHOD 2 
void method2(int arr[],int size){
    int start =0;
    int end= size-1;
    while(start<=end){
        if(arr[start] ==1 && arr[end]==0){
            swap(arr[start],arr[end]);
        }
        else if(arr[start]==0){
            start++;
        }
        else{
            end--;
        }
    }

}
//shift from right to the left by one place in the arrary
void shift(int arr[],int size){
    int temp =arr[size-1];
    for(int i =size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i =0;i<size;i++){
        cout<<arr[i];
    }
}

//shift array element (left to right)

void shift1(int arr[] ,int size){
    int temp =arr[0];
    for(int i =0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    for(int i =0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    //taking the input
    int size;
    cout<<"enter the size of the arrary you want to make :";
    cin>>size;
    int arr[size];
    input(arr ,size);
    // count(arr ,size);
    // print(arr,size);
    // minmax(arr, size);
    // reverase(arr, size);

    // extereme(arr, size);
    // print(arr,size);
    cout<<endl<<endl;
    // int ans =uniqueElement(arr ,size);
    // cout<<ans;

    // printallPairs(arr, size);

    // counting(arr,size);

    // method2(arr,size);
    // print(arr ,size);

    // shift(arr,size);
    shift1(arr,size);
    
    return 0;
}