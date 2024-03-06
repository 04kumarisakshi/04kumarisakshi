// Problem Statement: Given an array of N integers, write a program to implement the Insertion sorting algorithm.

// Examples:

// Example 1:
// Input: N = 6, array[] = {13,46,24,52,20,9}
// Output: 9,13,20,24,46,52
// Explanation: 
// After sorting the array is: 9,13,20,24,46,52


#include<bits/stdc++.h>
using namespace std;
int  insertion(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
      int j=i;
      while(j>0&&arr[j-1]>arr[j])
      {
        swap(arr[j],arr[j-1]);
        j--;
      }
    }
    
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin>>arr[i];
    }
    insertion(arr,n);
     for (int i = 0; i < n; i++)
 {
  cout<<arr[i]<<" ";
 }
    
}