#include<iostream>
#include<climits>    //for using INT_MIN or INT_MAX and many more
using namespace std;

int main(){
    int arr[] ={1,45,5,56,23,2,34,5,6,7,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);  //calculating size of arrary
    cout<<"size of array arr is "<<n1<<endl<<endl;

    // Question 1 : take input marks of students and print the rollno. of students whose
//                  marks are less than 35(here rollno. is index)
    int n ;
    cout<<"enter number of element you want to enter";
    cin>>n;
    int arr1[n];
    cout<<"enter elements";
    //taking input
    for(int i =0 ; i < n ; i++){
        cin>>arr1[i];
    }
    //output
    for(int i = 0; i<n;i++){
        if(arr1[i]<35){
            cout<<i << "  ";
        }
    }
    cout<<endl;
   
   

    //Question2 : print the address of all the element in arr1
    for(int i = 0;i<n;i++){
        cout<<&arr1[i]<<endl;      //  &arr  and arr  is same both give address of arr[0]
    }

    //Question3 : calculate the sum of all the element in the array
    int sum =0;
    for(int i  = 0 ;i<n;i++){
        sum += arr1[i]; 
    }
    cout<<sum<<endl;

    //Question 4 : linear search in an array .Find element in an array
    int search;
    cout<<"enter the element youn waant to search : ";
    cin>>search;
    //check_mark
    bool flag =false;
    for(int i =0;i<n;i++){
        if(arr1[i]==search){
            flag =true;
        }
    }
    if(flag ==true) cout<<"element is present";
    else cout<<"element is not present";

//Question 5 : find the maximum number out of all the element in the array
    int max =INT16_MIN;
    for(int i =0 ;i<n;i++){
        if(max<arr1[i]){
            max = arr1[i];
        }
    }
    cout<<endl<<"maximum number is "<<max;

    //Question 6 : find second largest element in the array
    int largest = INT_MIN;
    int second_max = INT_MIN;
    for(int i = 0 ;i<n;i++){
        if(largest<arr1[i]){
            largest = arr1[i];
        }
    }
    for(int i = 0;i<n;i++){
        if(second_max<arr1[i] && arr1[i]!=largest){
            second_max = arr1[i];
        }
    }
    cout<<endl<<"second largest elment  : "<<second_max;

    //Question 7 :count the number of elements in given array greater than a given number x
    int num;
    cout<<"enter the number you want count greater then num";
    cin>>num;
    int count =0 ;
    for(int i =0 ;i<n;i++){
        if(arr1[i]>num) count++;
    }
    cout<<endl<<"greater then nums is "<<count;

    return 0;
}