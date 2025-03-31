#include<iostream>
#include<vector>
using namespace std;
void input(int arr[][4] ,int row ,int col){
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++)
        {cin>>arr[i][j];

        }
    }
}
void print(int arr[][3] ,int row ,int col){
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++)
        {cout<<arr[i][j]<<"   ";

        }
        cout<<endl;
    }
}
//PRINT THE ARRARY COLUMN WISES
void column(int arr[][4] ,int row, int col ){
    for(int i =0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<"  ";
        }
        cout<<endl;
    }
}

void linearsearch(int arr[][4],int row ,int col ,int target){
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(arr[i][j]==target){
                cout<<"found at the index :"<<i<<","<<j;
            }
        }
        cout<<endl;
    }
}
void minMax(int arr[][4],int row ,int col){
    int max =INT16_MIN;
    int min =INT16_MAX;
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            if(arr[i][j]>max){
                max =arr[i][j];
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            if(arr[i][j]<min){
                min =arr[i][j];
            }
        }
    }
    cout<<"max is : "<<max <<" , "<<"Min is :"<<min;

}
void rowAndColumnSum(int arr[][3] ,int row ,int col){
    cout<<"row wise sum is :"<<endl;
    for(int i =0;i<row;i++){
        int sum =0;
        for(int j =0;j<col;j++){
            sum +=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<"column wise sum is :  "<<endl;
    int diagonalsum1 =0;
    int secondarysum =0;
    for(int i =0;i<col;i++){
        int sum =0;

        for(int j =0;j<row;j++){
            //diagonal element sum calculating 
            if(i ==j){
                diagonalsum1 +=arr[i][j];
                
            }
            //secondary column wise sum calculating 
            if(i+j ==col){
                secondarysum +=arr[i][j];
            }
            //column wise sum calculating 
            sum +=arr[j][i];
        }

        cout<<sum<<" ";
    }
    cout<<endl<<"secondary sum is : "<<secondarysum;
    cout<<endl<<"diagonal element sum is : "<<diagonalsum1;
}
void transpose(int arr[][3],int row ,int col){
    for(int i =0;i<row;i++){
        for(int j =i;j<col;j++){
            swap(arr[i][j] ,arr[j][i]);
        }
    }
}




int main(){
    int col =3;
    int row =3;
    //int arr[3][4]= {0,20,30,40,50,60,70,80,90,100,110,120};
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    //input(arr, row ,col);
    // print(arr1, row, col);
    // column(arr ,row ,col);
    // int target =100;
    // linearsearch(arr, row,col,target);

    // minMax(arr,row,col);
    // rowAndColumnSum(arr1,row,col);
    transpose(arr1,row,col);
    print(arr1,row,col);
    

    

    
    return 0;
}