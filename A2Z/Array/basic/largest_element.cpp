// Problem Statement: Given an array, we have to find the largest element in the array.

// Examples
// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 5
// Explanation: 5 is the largest element in the array. 


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

    int max=INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i]>max)
        {
            max=arr[i];
        }

        }
    cout<<max;
    
}