// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Examples
// Example 1:
// Input: [1,2,4,7,7,5]
// Output: Second Smallest : 2
// 	Second Largest : 5
// Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

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
    sort(arr,arr+n);
    cout<<"second smallest: "<<arr[1]<<" "<<"second largest: "<<arr[n-2];


}