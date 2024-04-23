// An array contains both positive and negative numbers in
//  random order. Rearrange the array elements so that all
//   negative numbers appear before all positive numbers.

// Examples : 

// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5



#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n) 
{ 
    int j = 0; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] < 0) { 
            if (i != j) 
                swap(arr[i], arr[j]); 
            j++; 
        } 
    } 
} 
int main()
{
    int i,n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
     cout<<"Enter element of array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

  rearrange(arr,n);
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}