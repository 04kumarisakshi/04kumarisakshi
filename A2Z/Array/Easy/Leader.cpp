// Problem Statement: Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.

// Examples
// Example 1:
// Input:

//  arr = [4, 7, 1, 0]
// Output
// :
//  7 1 0
// Explanation:

//  Rightmost element is always a leader. 7 and 1 are greater than the elements in their right side.

#include<bits/stdc++.h>
using namespace std;


vector<int>leader(int arr[],int n)
{
       vector<int> ans;
    for(int i=0;i<n;i++)
    {
      bool leader = true;
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]>arr[i])
        {
        leader=false;
            break;
        }
      }
         if (leader)
    ans.push_back(arr[i]);
      
    }
    
}
int main(){
 int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = leader(arr,n);
  
  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}
