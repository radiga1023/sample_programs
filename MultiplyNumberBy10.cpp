// C++ program to multiply a number with 10 using 
// bitwise operators 
#include<bits/stdc++.h> 
using namespace std; 

// Function to find multiplication of n with 
// 10 without usng multiplication operator 
int multiplyTen(int n) 
{ 
	return (n<<1) + (n<<3); 
} 

// Driver program to run the case 
int main() 
{ 
	int n = 50; 
	cout << multiplyTen(n); 
	return 0; 
} 
