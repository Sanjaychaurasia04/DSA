#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

//fibbonacci series using the dp
int fibbo(int n , vector<int>&dp){
    if(n==0 || n==1) return n;
    if(dp[n] != -1) return dp[n]; //base casefor the dp
    return dp[n] = fibbo(n-1 ,dp)+fibbo(n-2,dp);
}
//climbing stairs problem
int ways(int n,vector<int>&dp ){
    if(n ==0|| n==1) return  1;
    if(dp[n] != -1) return dp[n];
    dp[n] =ways(n-1 ,dp)+ ways(n-2 ,dp);
    return dp[n];
}
//frog jumps
int frogjump(int n,vector<int>& height ,vector<int>&dp){
    if(n ==0)return 0;
    if(dp[n] != -1) return dp[n];

    int left = frogjump(n-1,height,dp) + abs(height[n] - height[n-1]);
    int right = INT_MAX;
    if(n>1){
        right =frogjump(n-2,height,dp) + abs(height[n] - height[n-2]);
    }
    return dp[n] = min(left ,right);
}
int main(){
    vector<int>height={10,34,12,45,12,78};
    int size = height.size();
    vector<int>dp(size ,-1);
    int result=frogjump(size-1,height,dp);
    cout<<result;


    int n;
    cin>>n;
    
    int ans1 = fibbo(n,dp);
    cout<<"fibbonacci :"<<ans1<<endl;
    int ans = ways(n,dp );
    cout<<ans;

    return 0;
}