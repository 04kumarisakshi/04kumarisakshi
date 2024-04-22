// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

 

// Example 1:

// Input: nums = [2,2,1]
// Output: 1
#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter number of element in array: ";
    int n;
    cin>>n;
    int flag =0;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin>>arr[i];
    }

    int ans=0;
	   for(auto x:arr)
	   ans^=x;
	   cout<<ans;
}