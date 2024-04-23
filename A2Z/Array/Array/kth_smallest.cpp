// Given an array arr[] and an integer K where K 
// is smaller than size of array, the task is to find 
// the Kth smallest element in the given array. It is given
//  that all array elements are distinct.

// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// L=0 R=5

// Output : 7
// Explanation :
// 3rd smallest element in the given 
// array is 7.


#include <bits/stdc++.h>
using namespace std;

int main(){

    int i,n,k;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
 sort(arr,arr+n);
 cout<<"Enter the kth position:";
 cin>>k;
cout<<arr[k-1];
}