// cout no of 0 ans 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count1=0,count2=0;
    int n,i;

    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:\n";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
     for( i=0;i<n;i++){
        if(arr[i]==0)
    {
        count1= count1+1;
    }
         if(arr[i]==0)
    {
        count2= count2+1;
    }
    
    }
    cout<<"count of 0's"<<count1<<" "<<"count of 1's"<<count2<<" ";
   
}