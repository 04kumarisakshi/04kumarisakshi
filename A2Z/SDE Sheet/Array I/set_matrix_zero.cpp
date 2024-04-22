// Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

// Examples
// Examples 1:
// Input:
//  matrix=[[1,1,1],[1,0,1],[1,1,1]]

// Output:
//  [[1,0,1],[0,0,0],[1,0,1]]

#include<bits/stdc++.h>
using namespace std;
void row(int arr[3][3],int n ,int i,int m){
for(int j=0;j<n;j++)
{
    if(arr[i][j]!=0)
    {
        arr[i][j]=-1;
    }
}
}
void col(int arr[3][3],int n ,int j,int m)
{
for(int i=0;i<n;i++)
{
    if(arr[i][j]!=0)
    {
        arr[i][j]=-1;
    }
}
}
int zero_matrix(int arr[3][3],int n ,int m)
{
    for(int i=0 ;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                row(arr,n,i,m);
                col(arr,n,j,m);
            }
        }
    }
    for(int i=0 ;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==-1)
            {
                arr[i][j]=0;
            }
        }
    }
}
int main(){
    int n=3,m=3;
 int arr[3][3]={{1,1,1},{1,0,1},{1,1,1}};
zero_matrix(arr,n,m);
 for(int i=0 ;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<endl;
        }}
}
