#include<iostream>
using namespace std;

//[Pyramid Pattern]
void pyramid(int num){
    for(int i =0;i<num;i++){
        for(int j =0;j<num - i-1;j++){
            cout<<"-";

        }
        //cout<<endl;
        for(int  j= 0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void invertedpyramid(int num){
    for(int i =0;i<num;i++){
        for(int j =0;j<i;j++){
            cout<<"-";
        }
        for(int j = 0;j<num-i;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}
//hollow pyramid pattern
void hollowpyramid(int num){
    for(int i = 0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            cout<<"-";
        }
        for(int j =0;j<i+1;j++){
            if(j==0 || j==i){
                cout<<"*";
            }
            else{
                cout<<"-";
            }
        }
        cout<<endl;
    }

}
//hollow diamond pattern
void diamond(int num){
    for(int i =0;i<num;i++){
        for(int j =0;j<num-i-1;j++){
            cout<<"-";
        }
        for(int j =0;j<i+1;j++){
            if(j==0 || j==i){
                cout<<"*";
            }
            else{
                cout<<"-";
            }
        }
        cout<<endl;

    }
    
    //invered
    for(int i= 0;i<num;i++){
        for(int j =0;j<i;j++){
            cout<<"-";

        }
        for(int j=0;j<num-i;j++){
            if(j==0 || j==num-1-i){
                cout<<"*";
            }
            else{
                cout<<"-";
            }
        }
        cout<<endl;
    }
 
}
//fancy pattern
void fancy(int num){
    for(int i =0;i<num;i++){
        for(int j =0;j<2*i+1;j++){
            if(j%2 ==0){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;

    }
    for(int i =0;i<num;i++){
        for(int j =0;j<2*num - 2*i-+1;j++){
            if(j%2 == 0){
                cout<<num-i;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }   
}

void fancypattern2(int num){
    char ch;
    for(int i =0;i<num;i++){
        for(int j =0;j<i+1;j++){
            ch = 'A'+j;
            cout<<ch;
        }
        for(char j =ch;j>'A';){
            j = j-1;
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    // pyramid(num);
    // cout<<"inverse pyramid now printing"<<endl;
    // invertedpyramid(num);
    // cout<<endl;
    // hollowpyramid(num);
    // cout<<endl;
    // diamond(num);
    fancy(num);
    cout<<endl;
    fancypattern2(num);

    return 0;

}