//ARRAY PROBLEM : ARRAY IS OF FIX SIZE ONCE WE DECLARE WE CAN NOT CHANGE ITS SIZE AT RUN TIME
//THAT IS THE ADVANTAGE OF VECTORS

//VECTORS --> IS A DYNAMIC ARRAY
// in vector if size exceeds it MAKE A NEW ARRAY OF SOUBLE ITS SIZE THEN PREVIOUS ONE AND COPY THE ELEMENT IN THAT
//IT TAKE MORE MEMORY AND TIME BUT IT IS BENEFICIAL WHEN WE DON`T KNOW THE ACTUAL SIZE OF THE ARRAY

//CAPACITY DOES NOT CHANGES ONCES IT IS ASSIGNED EVEN IF WE DO THE POP_BACK OPERATION

             // vector declaration
//              1)vector<int>v; in this vector is created without initilizing size
//              2)vector<int>v(10); vector size is declared
//              3)vector<int>v(10,5);  vector size is declared as well as its value is also put that is 5
//              4)vector<int>v(12,32,34,34,24,43,42,34,32,43,34,23,32,3,24,34)


//in this we study about 
//      1)push_back()
//      2)pop_back()
//      3)at
//      4)insertion in vertor fuction in which parameter is not given
//      5)output fuc]tion in vector
//      6)sort
//      7)vectors are pass by value
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//pass by value
void change(vector<int>arr1){
    arr1[0] = 456;
    for(int i = 0;i<arr1.size();i++){
        cout<<arr1[i]<<"  ";
    }

}
void PassByReference(vector<int>&arr2){
    arr2[0] = 456;
    cout<<"pass by reference "<<endl;
    for(int i = 0;i<arr2.size();i++){
        cout<<arr2[i]<<"  ";
    }

}

int main(){
    
    vector<int> V;     //declaration of vector
//operation 1
    V.push_back(10);
    V.push_back(20);
    V.push_back(30);
    V.push_back(40);
    V.push_back(50);
    cout<<"capacity before pop operation : "<<V.capacity();
    for(int i = 0;i< V.size();i++){
        cout<<endl<<V[i]<<"  ";
    }

//opertion 2
//at OPERATOR IN VECTOR
    V.at(2) = 10;   //at is used for push and pop operation at any position 
    cout<<V.at(2);

//operation 3 

    V.pop_back();  //IT REMOVES LAST INSERTED ELEMENT IN THE VECTOR ARRAY
    V.pop_back();
    V.pop_back();
    V.pop_back();
    cout<<"capacity after pop operation : "<<V.capacity();

    for(int i =0 ;i< V.size();i++){
        cout<<endl<<V[i]<<"  ";
    }

//operation 4

    //  taking input in vector if size is n=ot given

    vector<int> a;
    cout<<"enter the element : ";
    for(int i =0;i<5;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

//operation 5
    sort(a.begin(),a.end());    
//operation 6
    //output
    for(int i =0;i<5;i++){
        cout<<a[i];
    }

//opertion  7     vector to fuction
         //  vectors are pass by value 

    vector<int>arr1{12,23,243,34,24,43};
    cout<<"original";
    for(int i = 0;i<arr1.size();i++){
        cout<<arr1[i]<<"  ";
    }
    cout<<endl;
    change(arr1);
    cout<<"after change"<<endl;
    for(int i = 0;i<arr1.size();i++){
        cout<<arr1[i]<<"  ";
    }
    //calling pass by reference
    PassByReference(arr1);

    return 0;
}