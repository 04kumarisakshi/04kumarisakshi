// Given an array arr[] denoting heights of N towers and a positive integer K.

// For each tower, you must perform exactly one of the following operations exactly once.

// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

// You can find a slight modification of the problem here.
// Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.

// Example 1:

// Input:
// K = 2, N = 4
// Arr[] = {1, 5, 8, 10}
// Output:
// 5
// Explanation:
// The array can be modified as 
// {1+k, 5-k, 8-k, 10-k} = {3, 3, 6, 8}. 
// The difference between 
// the largest and the smallest is 8-3 = 5.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the value of k of array: ";
    cin>>k;
   
    int arr[n];
    cout<<"Enter the element  of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
