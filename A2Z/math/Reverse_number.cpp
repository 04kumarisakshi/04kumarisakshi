//Problem Statement: Given a number N reverse the number and print it.


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
    cout<<"reverse number = "<<p;
    
}