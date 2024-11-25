//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

// Driver Code Ends

// User function template for C++

class Solution {

public:

// Function returns the second

// largest elements

int getSecondLargest (vector<int> &arr) (

// Code Here

int first INT_MIN;

int second INT_MIN;

for (int num: arr) { if (num first) {

second first;

} else if (num > second && num < first) {

first = num;

second = num;

}

}

// return second Integer.MIN_VALUE ? -1: second;

if(second ! INT_MIN)

return second;

else

return -1;

}; }
