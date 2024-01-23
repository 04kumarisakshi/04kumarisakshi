// Given an array, rotate the array by one position in clock-wise direction.
// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4
 

// Example 2:

// Input:
// N = 8
// A[] = {9, 8, 7, 6, 4, 2, 1, 3}
// Output:
// 3 9 8 7 6 4 2 1

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
   
    cout<<"Enter the value of n: ";
    cin>>n;
     int arr[n];
    cout<<"Enter the element of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>v;
    cout<<"Enter the position with which u want to rotate the array:";
    cin>>m;
     for(int i=n-1;i>m;i--)
     {
        v.push_back(arr[i]);

     }
     for(int i=0;i<n-m;i++)
     {
        v.push_back(arr[i]);

     }

  for (int i = 0; i < v.size(); i++) {
  cout<<v[i];
  }
    
}