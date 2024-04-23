// Problem Statement: Given an array of N + 1 size, where each element is between 1 and N. Assuming there is only one duplicate number, your task is to find the duplicate number.

// Examples:

// Example 1: 

// Input: arr=[1,3,4,2,2]

// Output: 2

// Explanation: Since 2 is the duplicate number the answer will be 2.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[]={1,3,4,2,2};
    int m=n-1;
    int sum2=0;
    int sum1 =m*(m+1)/2;
    for(int i =0;i<n;i++)
    {
        sum2 +=arr[i];

    }
    int ans =sum2-sum1;
    cout<<ans;
}