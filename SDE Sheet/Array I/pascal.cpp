// Program to generate Pascal's Triangle


// 32

// 1
// Problem Statement: This problem has 3 variations. They are stated below:

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.
#include<bits/stdc++.h>
using namespace std;
void pascal(int n)
{
    for(int i=1;i<=n;i++)
   { int c=1;
   for(int j=1;j<=i;j++)
   {
    cout<<c<<" ";
    c=c*(i-j)/j;

   }
   cout<<endl;
   }


}
int main(){
    int n;
    cin>>n;
    pascal(n);
}