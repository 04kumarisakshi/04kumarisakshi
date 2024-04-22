//485. Max Consecutive Ones
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum 
// number of consecutive 1s is 3

#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter number of element in array: ";
    int n,max=INT_MIN;
    int count=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin>>arr[i];
    }
  for (int i = 0; i < n; i++)
{
    if(arr[i]==1)
    {
        count++;
    }
    else{
        count=0;
    }
    if(max<count)
    {
        max=count;
    }


}
cout<<max;
}