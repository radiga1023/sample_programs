// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return (15 * N) without 
// using '*' or '/' operator 
long multiplyByFifteen(long n) 
{ 
	// prod = 16 * n 
	long prod = (n << 4); 

	// ((16 * n) - n) = 15 * n 
	prod = prod - n; 

	return prod; 
} 

// Driver code 
int main() 
{ 
	long n = 7; 

	cout << multiplyByFifteen(n); 

	return 0; 
} 
