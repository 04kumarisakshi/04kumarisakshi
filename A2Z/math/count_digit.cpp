//Problem Statement: Given an integer N, write a program to count the number of digits in N.


#include<bits/stdc++.h>
using namespace std;


// string method
// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     string s =to_string( n);
//     int x= s.size();
//     cout<<"number of digit : "<<x;


// }
//digit extraction

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int x =n,count=0;
    while(x!=0)
    {
       x=x/10 ;
       count++;

    }
    cout<<"number of digit :"<<count;

}

