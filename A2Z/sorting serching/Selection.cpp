// Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.

// Examples:

// Example 1:
// Input: N = 6, array[] = {13,46,24,52,20,9}
// Output: 9,13,20,24,46,52
// Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52


//  place the smallest element at its place....


#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int n)

{
for (int i = 0; i < n; i++)
{
    int min =i;
    for (int j = i+1; j < n; j++)
    {
        if (arr[i]>arr[j])
  {
    int min =arr[j];
    swap(arr[j],arr[i] );
  }
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
    selection(arr,n);
     for (int i = 0; i < n; i++)
 {
  cout<<arr[i]<<" ";
 }
    
}