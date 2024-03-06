// Problem Statement: You are given an array. The task is to reverse the array and print it. 

// Examples:

// Example 1:
// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.


#include<bits/stdc++.h>
using namespace std;
int reverse( int n ,int arr[]){
for ( int i = n-1; i >=0; i--)
{
    cout<<arr[i];
}

}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    reverse(n,arr);
}