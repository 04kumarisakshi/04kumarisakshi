// Problem Statement: Given a double x and integer n, calculate x raised to power n. Basically Implement pow(x, n).

// Examples:

// Example 1:

// Input: x = 2.00000, n = 10

// Output: 1024.00000

// Explanation: You need to calculate 2.00000 raised to 10 which gives ans 1024.00000

#include <bits/stdc++.h>
using namespace std;

int main(){
     long double n;
    cin>>n;
    double x;
    cin>>x;
    long double a=pow(n,x);
    cout<<a;
}