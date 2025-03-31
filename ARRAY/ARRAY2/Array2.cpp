#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return;
}
void check_address(int arr1[] ,int n){  //in arrays pass by reference is done 
    for(int j=0;j<n;j++){    //what ever changes we make on fuction that will reflect in main fuction also
        cout<<&arr1[j]<<"  "; //in this both the address are same main fuction array address as well as check_address
    }
    return ;
}
int main(){
    int arr[] ={12,34,34,54,35,353,453,535,54,435};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl<<"original";
    for(int i=0;i<n;i++){
        cout<<&arr[i]<<"  ";
    }
    cout<<endl<<"funtion address";
    check_address(arr,n);

//ARRAYS AND POINTERS
    int arr1[] = {123,313,3123,124,321,213};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int *ptr = arr1;
    cout<<"without edited array";
    display(arr1,size1);
    //we can edit the array with the help of pointers
    *ptr =77;
    for(int i =0 ;i<size1;i++){      //we can print the values with the help of pointers
        cout<<*ptr<<" ";  //BY USING THIS WE CAN PRINT ARRAY WITHOUT USING [] BRACKETS
        ptr++;
    }
    ptr =arr;    //we are again pointing ptr to array of 0 index address because actual address
    // is lost in loop because of ptr++ .Now it is pointing to another address 


//ARRAY PROBLEM : ARRAY IS OF FIX SIZE ONCE WE DECLARE WE CAN NOT CHANGE ITS SIZE AT RUN TIME
//THAT IS THE ADVANTAGE OF VECTORS

//VECTORS --> IS A DYNAMIC ARRAY
// in vector if size exceeds it MAKE A NEW ARRAY OF SOUBLE ITS SIZE THEN PREVIOUS ONE AND COPY THE ELEMENT IN THAT
//IT TAKE MORE MEMORY AND TIME BUT IT IS BENEFICIAL WHEN WE DON`T KNOW THE ACTUAL SIZE OF THE ARRAY



    return 0;
}