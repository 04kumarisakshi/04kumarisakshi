// 283. Move Zeroes

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]


#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter number of element in array: ";
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin>>arr[i];
    }
       vector<int> temp;
        //step 1
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                temp.push_back(arr[i]);
            }
                    }
                    //step2
                    int n2=temp.size();
                    for(int i=0;i<n2;i++)
                    {
                        arr[i]=temp[i];
                    }
                    for(int i=n2;i<n;i++) 
                    {
                       arr[i]=0;
                    }

              for(int i=0;i<n;i++) 
                    {
                       cout<<arr[i]<<" ";
                    }

    }
