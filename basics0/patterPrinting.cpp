#include<iostream>
using namespace std;

//Pattern 1: printing square;
/*

* * * * * 
* * * * *
* * * * *
* * * * *
* * * * *

*/

void square(int num){
    for(int i =0;i<num;i++){
        for(int j =0;j<num;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
   }

}

//Pattern 2 :printing rectangle
/*

 *  *  *  *  *  * 
 *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *  * 
 
*/

void rectangle(int row ,int col){
    for (int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<" * ";
        }
        cout<<endl;
   }
}

//Pattern 3 :hollow rectangle pattern 
/*

******
*    *
*    *
******

*/

void hollow_rectangle(int row ,int col){
    for(int i =0;i<row;i++){
    for(int j=0;j<col;j++){
        if(i==0||i==row-1||j ==0||j==col-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
    
   }
}

//Pattern 4 : half pyramid
/*

*
**
***
****
*****

*/

void half_pyramid(int num){
    for(int i=0;i<num;i++){
        for(int j =0;j<i+1;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
//Pattern 5
/*

******
*****
****
***
**
*

*/
void inverted_pyramid(int num){
    for(int i =0;i<num;i++){
        for(int j =0;j<num-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

//PATTERN 6 :FULL PYRAMID PATTERN
/*

____*
___* *
__* * *
_* * * *
* * * * *

*/
void pyramid(int num){
    for(int i =0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            cout<<"_";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
} 
//PATTERN 7 : INVERTED PYRAMID OF THE ABOVE 

/*

_****
__***
___**
____*

*/

void Inverted_pyramid(int num){
    for(int i =0;i<num;i++){
        for(int j=0;j<i;j++){
            cout<<"_";
        }
        for(int j =0;j<num-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//PATTERN 8

/*

____ *
___ *  *
__ *  *  *
_ *  *  *  * 
 *  *  *  *  *
 *  *  *  *  *
_ *  *  *  *
__ *  *  *
___ *  *
____ *


*/
void pattern8(int num){
    for(int i=0;i<num;i++){
    for(int j=0;j<num-i-1;j++){
        cout<<"_";
    }
    for(int j =0;j<i+1;j++){
        cout<<" * ";
    }
    cout<<endl;
   }
   for(int i =0;i<num;i++){
    for(int j=0;j<i;j++){
        cout<<"_";
    }
    for(int j =0;j<num-i;j++){
        cout<<" * ";
    }
    
    cout<<endl;
   }

}
//PATTERN 9

//HOLLOW PATTERN OF THE BELOW
/*

---- * 
--- *  *
-- * - *
- * -- *
 * --- *

*/
void hollow_Pattern(int num){
    for (int i =0;i<num;i++){
        for(int j =0;j<num-i-1;j++){
            cout<<"-";
            
        }
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                cout<<" * ";
            }
            else{
                cout<<"-";
            }
        }
        cout<<endl;
    }
}

//PATTERN 10 : INVERT OF THE ABOVE PATTERN 

/*

*---*
-*--*
--*-*
---**
----*

*/
void INVERT(int num){
    for(int i =0;i<num;i++){
        for(int j =0;j<i;j++){
            cout<<"-";
        }
        for(int j= 0;j<num-i;j++){
            if(j==0||j==num-i-1){
                cout<<"*";

            }
            else{
                cout<<"-";
            }
        }
        
        cout<<endl;
    }
}

//PATTERN 11 : FLIPPED SOLID DIAMOND PATTERN 

/*

enter the number 10

* * * * * - * * * * * 
* * * * - - - * * * *
* * * - - - - - * * *
* * - - - - - - - * *
* - - - - - - - - - *
* - - - - - - - - - *
* * - - - - - - - * *
* * * - - - - - * * *
* * * * - - - * * * *
* * * * * - * * * * *


*/
void diamond(int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i;j++){
            cout<<"* ";
        }
        for(int j =0;j<2*i+1;j++){
            cout<<"- ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"- ";
        }
        for(int j =0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//PATTERN 12 : FANCY PATTERN

/*

enter the number of cols :6
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5

*/
void fancy(int num){
    for(int i =0;i<num;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2 !=0){
                cout<<"*";
            }
            else{
                cout<<i+1;
            }
        }
        cout<<endl;
    }
}



//FANCY PATTERN 2 
/*

1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1

*/
void fancy2(int num){
    for(int i =0;i<num;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2 !=0){
                cout<<"*";
            }
            else{
                cout<<i+1;
            }
        }
        cout<<endl;
    }
    for(int i =0;i<num;i++){
        for(int j=0;j<2*num-(2*i)-1;j++){
            if(j%2!=0){
                cout<<"*";
            }
            else{
                cout<<num-i;
            }
        }
        cout<<endl;
    }   
}

//hollow inverted half prymiod

/*

******
*---*
*--*
*-*
**
*

*/
void pyramidHalf(int num){
    for(int i =0;i<num;i++){
        for(int j =0;j<num-i;j++){
            if(i==0 ||j==0 || j==num-i-1){
                cout<<"*";
            }
            else{
                cout<<"-";
            }
        }
        cout<<endl;
    }
}


int main(){
   //PATTERN 1 
   int num ;
   cout<<"enter the number :";
   cin>>num;
//    square(num);

   //PATTERN 2 
   int row ;
   int col;
   cout<<"enter the number of rows :";
   cin>>row;
   cout<<"enter the number of cols :";
   cin>>col;
//    rectangle(row ,col);

   // Pattern 3 :hollow rectangle pattern

    // hollow_rectangle(row,col);

    //PATTERN 4
   
    // half_pyramid(num);
    // cout<<endl<<endl;

    //PATTERN 5

    // inverted_pyramid(num);

    //Pattern 6

    // pyramid(num);
    // cout<<endl<<endl;

    //Pattern 7

//    Inverted_pyramid(num);

    //pattern 8
   
//    pattern8(num);
   
   //PATTERN 9 : hollow pattern of this 
   
//    hollow_Pattern(num);

//PATTERN 10: 
        // INVERT(num);

        
        //PATTERN 11 :DIAMOND


        // int n;
        // cout<<"enter the number ";
        // cin>>n;
        // diamond(n/2);


        //PATTERN 12

        // fancy(num);
        // cout<<endl<<endl;

  //FANCY2 

        // fancy2(num);


        pyramidHalf(num);
    return 0;
}