// Problem statement: Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

// Examples
// Example 1:
// Input:
 
// n = 4, arr1[] = [1 4 8 10] 
// m = 5, arr2[] = [2 3 9]

// Output:
 
// arr1[] = [1 2 3 4]
// arr2[] = [8 9 10]

// Explanation:

// After merging the two non-decreasing arrays, we get, 1,2,3,4,8,9,10.




#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) {

    //Declare 2 pointers:
    int left = n - 1;
    int right = 0;
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    
  for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

