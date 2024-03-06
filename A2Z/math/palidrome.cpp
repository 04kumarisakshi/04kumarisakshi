//Given a number check if it is a palindrome.

//An integer is considered a palindrome when it reads the same backward as forward.



#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,d;
    int p=0;
    cout<<"Enter a number: ";
    cin>>n;
    int x=n;
    while ((x!=0))
    {
  d=x%10;
        p = p*10+d;
        x=x/10;

    }
   if(p==n)
   {
    cout<<"number is palidrome";
   }
    else{
        cout<<"number is not palidrome";
    }
}