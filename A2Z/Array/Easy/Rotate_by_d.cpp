// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

// Examples:

// Example 1:
// Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
// Output: 6 7 1 2 3 4 5
// Explanation: array is rotated to right by 2 position .
#include<bits/stdc++.h>
using namespace std;
//Approch 1 using a temp arr
void Rotate_Right(int arr[],int n,int k)
{
    if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--)
  {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
}
int main()
{int n =4;
int k;
cin>>k;
int arr[]={1,2,3,4};
Rotate_Right(arr,n,k);
  cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

//Approch 2 by reverse method

int main()
{int n = 4;
int k;
cin>>k;
int arr[]={1,2,3,4};
reverse(arr,arr+k);
reverse(arr+k,arr+n);
reverse(arr,arr+n);
cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

