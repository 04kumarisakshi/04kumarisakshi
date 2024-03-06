//Problem Statement: Given a number, check whether it is prime or not. A prime number is a natural number that is only divisible by 1 and by itself.

#include<bits/stdc++.h>
using namespace std;

//Using Iterative solution
bool isPrime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
   bool ans = isPrime(n);

   if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }

}