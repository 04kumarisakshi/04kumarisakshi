//Problem Statement: Find the gcd of two numbers.


#include<bits/stdc++.h>
using namespace std;


//Brute force

int main(){
int n,m;
cin>>n>>m;
int t=min(n,m);
int ans;

for(int i=1;i<=t;i++)
{
    if(n%i==0 && m %i==0)
    {
        ans=i;
    }
}
cout<<ans;

}

//Using Euclidean’s theorem.
