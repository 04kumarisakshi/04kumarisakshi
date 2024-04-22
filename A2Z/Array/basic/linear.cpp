#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter number of element in array: ";
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin>>arr[i];
    }
    cout<<"Enter number a ";
    int a;
    cin>>a;
     for (int i = 0; i < n; i++)
    if(a==arr[i])
    {
      cout<<"found";  
    }
    else{
        cout<<"not found";
    }
}