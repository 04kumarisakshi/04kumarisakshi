
#include<bits/stdc++.h>
using namespace std;
int linear(int arr[][],int n,int target){
    int i,j;
for( i=0;i<n;i++){
       for(j=0;j<n;j++){
        if(arr[i][j]==target)
        {
            return i,j;
        }
       }
    }
  return -1,-1;
}

int main(){
    int n,i,target,j;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the element of array:\n";
    for( i=0;i<n;i++){
       for(j=0;j<n;j++){
        cin>>arr[i][j];
       }
    }
  int ans= linear(arr,n,target);
  cout<<ans;
 
}