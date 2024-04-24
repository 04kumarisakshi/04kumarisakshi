// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.


#include <bits/stdc++.h>
using namespace std;
int longest(int arr[],int n)
{    int i;
    sort(arr,arr+n);
    if(n==0)
    {
        return 0;
    }
    int current_seq=1;
    int long_seq=0;
    for(i=1;i<n;i++)
    {
        if(arr[i] !=arr[i-1])
        {
            if(arr[i]==arr[i-1]+1)
            {
                current_seq++;
            }
            else
            {
                long_seq=max(current_seq,long_seq);
                current_seq=1;

            }

        }
    }
    return max(current_seq,long_seq);
}

int main(){
    int n=6;
    int arr[]={100,4,200,1,3,2};
    int ans=longest(arr,n);
    cout<<ans;
}