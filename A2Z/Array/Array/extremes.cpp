// You are given an array on n-elements. An extrema is an elements which is either
//  greater than its both of neighbors or less than its both neighbors. You have to 
//  calculate the number of local extrema in given array. 
// Note : 1st and last elements are not extrema.

// Examples : 

// Input : a[] = {1, 5, 2, 5}
// Output : 2

// Input : a[] = {1, 2, 3}
// Output : 0

#include<bits/stdc++.h>
using namespace std;

// int extrema(int arr[],int n)
// {    
//     int i;
//     int count= 0;
//      for( i=1;i<n-1;i++){
//      count+=(arr[i] > arr[i-1] && arr[i] > arr[i-1] );
//      count+=(arr[i] < arr[i-1] && arr[i] < arr[i-1] );
//      }
//   return count;
// }
// int main(){
//     int n,i,d;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of array:\n";
//     for( i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<extrema(arr,n);

// }
 


 int main(){
    int n,i,m;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:\n";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0,right=(n-1);
    if(n%2==0)
    {
        m=n/2;
    }
    else{
        m=(n/2)+1;
    }
    for(i=0;i<m;i++){
    if(left==right)
    {cout<<arr[left];}
    else{
        cout<<arr[left]<<" "<<arr[right]<<" ";
        left++;
        right--;
    }
    }
 }