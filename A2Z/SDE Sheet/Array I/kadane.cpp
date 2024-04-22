// Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
// has the largest sum and returns its sum and prints the subarray.

// Examples
// Example 1:
// Input:
//  arr = [-2,1,-3,4,-1,2,1,-5,4] 

// Output:
//  6 
#include<bits/stdc++.h>
using namespace std;
//brute 
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
    int maximum=INT_MIN;
  
    for(int i =0;i<n;i++)
    { 
        for(int j=i;j<n;j++)
        { int sum = 0;
            for(int k=i;k<=j;k++)
            {
                 sum =sum +arr[k];
            }
            maximum=max(maximum,sum);

          
        }
     
    }
    cout<<maximum;
}


//better
int max_arr(int arr[],int n)
{
    int maximum=INT_MIN;
  
    for(int i =0;i<n;i++)
    { int sum = 0;
        for(int j=i;j<n;j++)
        { 
           
                 sum =sum +arr[j];
            
            maximum=max(maximum,sum);

          
        }
    
    }
 return maximum;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
    int a=max_arr(arr,n);
    cout<<a;
    
}