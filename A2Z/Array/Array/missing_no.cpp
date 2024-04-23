// Given an array arr[] of size N-1 with integers in the range of [1, N],
//  the task is to find the missing number from the first N integers.
// Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
// Output: 5
// Explanation: Here the size of the array is 7, so the range will be [1, 8].
//  The missing number between 1 to 8 is 5

#include<bits/stdc++.h>
using namespace std;

int missing(int arr[],int n)
{ int m = n+1;
  int i;
  int sum=0;
   int formula_sum =((m)*(m+1))/2;
    for( i=0;i<n;i++){
       sum = arr[i]+sum;
       
       
    }
    
    int ans =formula_sum-sum;
    return ans;

}

int main(){
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:\n";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
   
    
    cout<<missing(arr,n);
    
   

}