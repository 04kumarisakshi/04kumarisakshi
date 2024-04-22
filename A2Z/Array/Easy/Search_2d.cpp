// Problem Statement: You have been given a 2-D array 'mat' of size 'N x M' where 'N' and 'M' denote the number of rows and columns, respectively. The elements of each row are sorted in non-decreasing order. Moreover, the first element of a row is greater than the last element of the previous row (if it exists). You are given an integer ‘target’, and your task is to find if it exists in the given 'mat' or not.

// Examples
// Example 1:
// Input Format:
//  N = 3, M = 4, target = 8,
// mat[] = 
// 1 2 3 4
// 5 6 7 8 
// 9 10 11 12
// Result:

#include<bits/stdc++.h>
using namespace std;
int main(){
      int n=3,m=4;
      int target=8;
      int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<n;i++)
    {
for(int j=0;j<m;j++)
{
if(arr[i][j]==target)
{
    cout<<"element present";
}
else{
    cout<<"elent not found!";
}
}
    }

}