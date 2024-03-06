// Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

// Examples:

// Example 1:
// Input: N = 5
// Output: 0 1 1 2 3 5
// Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n){
int a=0 ,b=1 , sum=0;
 cout<<a<<" "<<b<<" ";
for (int i = 2; i <= n; i++)
{
   sum = a + b;
 cout<<sum<<" ";
   a=b;
   b=sum;
  
}  }


int main(){
     int n;
    cout<<"Enter a number: ";
    cin>>n;
  
    fibonacci(n);
  
}