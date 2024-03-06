
// Problem: Print your Name N times using recursion



#include<bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
   if(i>n)
   {
     return;
   
    
   }
    cout<<i<<endl;
   print(i+1,n);
  
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(1,n);
}