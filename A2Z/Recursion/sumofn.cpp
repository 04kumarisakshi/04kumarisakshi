// Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

// Examples:

// Example 1:
// Input: N=5
// Output: 15
// Explanation: 1+2+3+4+5=15

// Example 2:
// Input: N=6
// Output: 21
// Explanation: 1+2+3+4+5+6=15

#include<bits/stdc++.h>
using namespace std;
int sum (int n){
    int count=0;
    for (int i = 1; i <= n; i++)
    {
        count=count+i;
    }
    
   cout<< count;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    sum(n); 
    
}