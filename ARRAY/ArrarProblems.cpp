// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){

//     int arr[] ={-59 ,-25, 58, -59, -25, 58};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int left =0;
//     int right =0;
//     int sum =arr[0];
//     int maxlength =0;
//     int target =-85;

//     while(right<n){
//         while(left<=right && sum>target){
//             sum -=arr[left];
//             left++;
//         }
//         if(sum ==target){
//             maxlength = max(maxlength ,(right -left) +1);
            
//         }
//         right++;
//         if(right < n){
//             sum +=arr[right];
//         }
//     }
//     cout<<"maxlength is : "<<maxlength;
//     return 0;
// }







#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward thw right pointer:
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}


//LONGEST CONSECUTIVE SEQUENCE


int main()
{
    vector<int> a = {-59 ,-25 ,58, -59 ,-25 ,58};
    long long k = -85;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

