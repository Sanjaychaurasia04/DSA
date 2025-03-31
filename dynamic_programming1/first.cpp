#include<iostream>
#include<vector>
using namespace std;
//video1 : 5 to 33
int fibbo( int num , vector<int>& dp){//memoiztion
    //time complexity : O(n)
    //time complexity : O(n)+ O(n)  stack memory and the dp memory
    if(num<=1) return num;
    if(dp[num] != -1) return dp[num];
     return dp[num] = fibbo(num-1 , dp) + fibbo(num-2 , dp);
}
int tabulation(int num , vector<int>& dp){
    //time complexity : O(n)
    //space complexity : O(n)
    dp[0] = 0;
    dp[1] = 1;
    for(int  i = 2;i<=num ;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[num];
}
// Better approach with space complexity O(1)
int better(int num , vector<int>& dp){
    int prev1 = 1;
    int prev2 = 0;
    int curr;
    for(int i = 2;i<= num;i++){
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

//video 2:
int stairs(int num){
    if(num == 0 || num ==1) return 1;
    return stairs(num-1) + stairs(num-2);

}
int main(){
    int num ;
    cin>>num;
    vector<int>dp(num+1 , -1);
    // cout<<"meoization :"<<fibbo(num , dp)<<endl;
    // cout<<"tabulation :"<<tabulation(num , dp)<<endl;
    // cout<<"better approach : "<<better(num, dp);
   
    cout<<stairs(num)<<endl;



    return 0;
}