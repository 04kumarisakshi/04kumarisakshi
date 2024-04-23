// Problem Statement: Given an array of numbers, you need to return the count of reverse pairs. Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].

// Examples
// Example 1:
// Input:
//  N = 5, array[] = {1,3,2,3,1)

// Output
// : 2 

// Explanation:
//  The pairs are (3, 1) and (3, 1) as from both the pairs the condition arr[i] > 2*arr[j] is satisfied.

#include<bits/stdc++.h>
using namespace std;

int count_reverse(int arr[], int n)
{  int count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>2*arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n=5;
    int arr[]={1,3,2,3,1};
    int ans=count_reverse(arr,n);
    cout<<ans;
}