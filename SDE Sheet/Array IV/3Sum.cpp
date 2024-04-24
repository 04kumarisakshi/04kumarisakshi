// Problem Statement: Given an array of N integers, your task is to find unique triplets that add up to give a sum of zero. In short, you need to return an array of all the unique triplets [arr[a], arr[b], arr[c]] such that i!=j, j!=k, k!=i, and their sum is equal to zero.

// Pre-requisite: 2 Sum Problem

// Examples
// Example 1:
// Input:
//  nums = [-1,0,1,2,-1,-4]

// Output:
//  [[-1,-1,2],[-1,0,1]]

// Explanation:
//  Out of all possible unique triplets possible, [-1,-1,2] and [-1,0,1] satisfy the condition of summing up to zero with i!=j!=k


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(int n,vector<int>&arr)
{   int target=0;
set<vector<int>> st;
   sort(arr.begin(),arr.end());
   for(int i=0;i<n;i++)
   {
    int j=i+1;
    int k=n-1;
    int sum=arr[i]+arr[j]+arr[k];
    if(sum==target)
    {
        st.insert({arr[i],arr[j],arr[k]});
        j++,k--;
    }
   }
   vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
int main()
{
    vector<int>arr= { -1, 0, 1, 2, -1, -4};
    int n =arr.size();
    vector<vector<int>>ans = threeSum(n,arr);
for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
}