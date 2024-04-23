//Given an array (or string), the task is to reverse the array/string.


// Input  : arr[] = {1, 2, 3}
// Output : arr[] = {3, 2, 1}

// Input :  arr[] = {4, 5, 1, 2}
// Output : arr[] = {2, 1, 5, 4}


#include <bits/stdc++.h>
using namespace std;

void revrse(int arr[] ,int start ,int end){
   
   while(start<end)
   {
    int temp =arr[start];
    arr[start]=arr[end];
    arr[end]= temp;
    start++;
    end--;
   }

}
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    revrse(arr,0,n-1);
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}