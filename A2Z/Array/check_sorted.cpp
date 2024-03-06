// Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

// Note: Two consecutive equal values are considered to be sorted.

#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter number of element in array: ";
    int n;
    cin>>n;
    int flag =0;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1])
      {  flag =1;
      break;
      }
      else{
        flag=0;
      }
    }
    
    if (flag==0)
    {
       cout<<"sorted array";
    }
    else{
        cout<<"not sorted";
    }
    


}