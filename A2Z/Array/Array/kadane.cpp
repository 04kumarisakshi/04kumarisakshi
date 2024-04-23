// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


// Example 1:

// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int max=INT_MIN,n,sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element  of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  for(int i=0;i<n;i++)
    {
        sum = sum +arr[i];
       if(sum>max)
       {
        max=sum;

       }
       if(sum<0)
       {
        sum=0;
       }
    }
 cout<<"ans is :"<<sum;
}