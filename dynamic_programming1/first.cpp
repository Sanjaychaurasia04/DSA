#include<iostream>
#include<vector>


//LEETCODE 2140
/*You are given a 0-indexed 2D integer array questions where questions[i] = [pointsi, brainpoweri].

The array describes the questions of an exam, where you have to process the questions in order (i.e., starting from question 0) and make a decision whether to solve or skip each question. Solving question i will earn you pointsi points but you will be unable to solve each of the next brainpoweri questions. If you skip question i, you get to make the decision on the next question.

For example, given questions = [[3, 2], [4, 3], [4, 4], [2, 5]]:
If question 0 is solved, you will earn 3 points but you will be unable to solve questions 1 and 2.
If instead, question 0 is skipped and question 1 is solved, you will earn 4 points but you will be unable to solve questions 2 and 3.
Return the maximum points you can earn for the exam.

 

Example 1:

Input: questions = [[3,2],[4,3],[4,4],[2,5]]
Output: 5
Explanation: The maximum points can be earned by solving questions 0 and 3.
- Solve question 0: Earn 3 points, will be unable to solve the next 2 questions
- Unable to solve questions 1 and 2
- Solve question 3: Earn 2 points
Total points earned: 3 + 2 = 5. There is no other way to earn 5 or more points.
*/
class Solution {
    public:
        long long helper(vector<vector<int>>& questions , vector<long long>&dp ,int num){
            if(num>=questions.size()) return 0;
            if(dp[num] != -1) return dp[num];
    
            long long inc =  helper(questions ,dp ,num+1);
            long long exc = questions[num][0]+ helper(questions ,dp , num +questions[num][1]+1);
            return dp[num]= max(inc ,exc);
        }
        long long mostPoints(vector<vector<int>>& questions) {
            vector<long long>dp(questions.size() , -1);
            return helper(questions ,dp ,0);
            
        }
};

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
    cout<<"meoization :"<<fibbo(num , dp)<<endl;
    cout<<"tabulation :"<<tabulation(num , dp)<<endl;
    cout<<"better approach : "<<better(num, dp);
   
    cout<<stairs(num)<<endl;



    return 0;
}