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
    int temp1,temp2;
     
    temp1 = arr[n-1];
    // left shift by one
     for(int i=(n-1);i>0;i--)
    {
       arr[i]=arr[i-1];
             
    }
    arr[0]=temp1;
     
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // right shift
    temp2 =arr[0];
     for(int i=0;i<n-1;i++)
    {
        
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp2;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}