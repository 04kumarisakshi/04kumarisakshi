// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// Example 1:

// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since
//  it does not appear in nums.

#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter number of element in array: ";
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin>>arr[i];
    }
     int sum =0;
       int actual_sum =(n*(n+1))/2;
        for(int i=0;i<n;i++)
        {
            sum = sum +arr[i];
        }
        int ans=actual_sum-sum;
          cout<<ans;
}