#include <bits/stdc++.h>
using namespace std;

int main()
{
    int min=INT_MAX;
    int n,i;

    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:\n";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
     for( i=0;i<n;i++){
        for(int j=i;j<n;j++){
        cout<<arr[i]+arr[j]<<" ";
    }
    }

}