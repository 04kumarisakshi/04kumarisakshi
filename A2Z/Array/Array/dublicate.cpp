// given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
 #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
  int ans;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element  of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    sort(arr,arr+n);
   for(int i=0;i<n;i++)
    {
   if(arr[i]==arr[i+1])
   {
      ans=arr[i];
   }
    }
    cout<<ans;
    
}
