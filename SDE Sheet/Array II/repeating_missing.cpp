// Problem Statement: You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.

// Examples
// Example 1:
// Input Format
// :  array[] = {3,1,2,5,3}
// Result
// : {3,4)
// Explanation
// : A = 3 , B = 4 
// Since 3 is appearing twice and 4 is missing

#include <bits/stdc++.h>
using namespace std;
vector<int >missing(vector<int>arr)
{   long long n =arr.size();
    long long s=0;
    long long s2=0;
    long long sn=(n*(n+1));
    long long s2n=(n*(n+1)*(2*n+1))/6;
    for(int i=0;i<n;i++)
    {
       s=s+arr[i];
     s2 += (long long)arr[i] * (long long)arr[i];

    }
        //S-Sn = X-Y:
    long long val1 = s-sn;

    // S2-S2n = X^2-Y^2:
    long long val2 = s2 - s2n;

    //Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;

    //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    // Here, X-Y = val1 and X+Y = val2:
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}



int main(){
vector<int> arr = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = missing(arr);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}