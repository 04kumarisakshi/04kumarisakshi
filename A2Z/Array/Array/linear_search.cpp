// Given an array, and an element num the task is to find if num is present in the given array or not. 
// If present print the index of the element or print -1
// Example 1:
// Input: arr[]= 1 2 3 4 5, num = 3
// Output: 2
// Explanation: 3 is present in the 2nd index


#include <bits/stdc++.h>
using namespace std;

// int liner(int arr[] ,int n,int m)
// {
// int i;
//    for(i=0;i<n;i++){
//         if(arr[i]==m)
//         {
//             return i;
//         }
        
        
//     }
//     return -1;
// }

// int main(){
//     int n,i,m;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of array:\n";
//     for( i=0;i<n;i++){
//         cin>>arr[i];
//     }
   
//        cout<<"Enter the element:";
//         cin>>m;
//         int val= liner(arr,n,m);
//         cout<<"position of element:"<<val;
   

// }


// without using frntion

 int main(){
    int n,i,m;
    int flag=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:\n";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
   
       cout<<"Enter the element:";
        cin>>m;
     for( i=0;i<n;i++){
        if(arr[i]==m)
        {
           flag=1;
           break;
        }
        else {
           flag=0;
        }
      }
    if(flag==1)
         {
            cout<<i;
         }
         else{
            cout<<-1;
         }
}
