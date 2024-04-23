// Problem Statement: Given an array of N integers. Find the elements that appear more than N/3 times in the array. If no such element exists, return an empty vector.

// Pre-requisite: Majority Element(>N/2 times)

// Examples
// Example 1:
// Input Format
// : N = 5, array[] = {1,2,2,3,2}
// Result
// : 2
// Explanation:
//  Here we can see that the Count(1) = 1, Count(2) = 3 and Count(3) = 1.Therefore, the count of 2 is greater than N/3 times. Hence, 2 is the answer.

#include <bits/stdc++.h>
using namespace std;

//Boyer-Moore Majority Vote Algorithm
