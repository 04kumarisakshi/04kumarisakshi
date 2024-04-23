// Given an array arr[] of size N and D index, the task is to rotate the array by the D index.
//  We have two flexibilities either to rotate them leftwards or rightwards via different ways 
//  which we are going to explore by implementing every way of rotating in both of the rotations.
 
//  Input  : arr[] = {1, 2, 3, 4, 5} 
// D = 2 
// Output : 3 4 5 1 2 


#include<bits/stdc++.h>
using namespace std;


void leftRotate(int arr[], int d, int n);
void leftRotatebyOne(int arr[], int n);
void printArray(int arr[], int n);
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}
 

void leftRotatebyOne(int arr[], int n)
{
    int i, temp;
    temp = arr[0];
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[i] = temp;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 

int main(){
    int n,i,d;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:\n";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    

     cout<<"Enter D ";
    cin>>d;
    leftRotate(arr, d ,n);
    printArray(arr,n);
    
}