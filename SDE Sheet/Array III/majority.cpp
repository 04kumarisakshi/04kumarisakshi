// Problem Statement: Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

// Examples
// Example 1:
// Input Format
// : N = 3, nums[] = {3,2,3}
// Result
// : 3
// Explanation
// : When we just count the occurrences of each number and compare with half of the size of the array, you will get 3 for the above solution. 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[]={2,2,1,1,1,2,2};
    sort(arr,arr+n);
     cout<<arr[n/2];
    
    // int count=0;
   
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==arr[i+1])
    //   { count ++;
 
    //     if(count>=n/2){
    //         cout<<arr[i];
    //     }}
    //     else{
    //         count=0;
    //     }
       
    // }
}
