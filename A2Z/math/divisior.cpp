//Problem Statement: Given a number, print all the divisors of the number. A divisor is a number that gives the remainder as zero when divided.


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= n; i++)
		{if(n % i == 0)
		{	cout << i << " ";
        }
        }


}