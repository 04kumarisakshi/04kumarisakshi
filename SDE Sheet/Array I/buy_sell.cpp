// Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Examples
// Example 1:
// Input:
//  prices = [7,1,5,3,6,4]
// Output:
//  5

#include<bits/stdc++.h>
using namespace std;


// //brute
int main(){
    int arr[]={7,1,5,3,6,4};
    int n=6;
   
    int profit=0;
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
        if(arr[j]>arr[i])
        {
         profit=max((arr[j]-arr[i]),profit);
        }
       }
    }
    cout<<profit;
}
//optimal
int main(){
    
    int arr[]={7,1,5,3,6,4};
    int n=6;
    int min_price = arr[0];
        int profit = 0;

        for(int i=1;i<6;i++){
          profit = max(profit,arr[i]-min_price);
            min_price = min(arr[i],min_price);
        }
        cout<<profit;
}