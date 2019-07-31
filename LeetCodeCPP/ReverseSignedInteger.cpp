

/*
Write a program to reverse an integer assuming that the input is a 32-bit integer. 
If the reversed integer overflows, print -1 as the output.
*/
// A simple C program to reverse digits of 
// an integer. 
#include <stdio.h> 

int reversDigits(int num) 
{ 
	int rev_num = 0; 
	while (num > 0) 
	{ 
		rev_num = rev_num*10 + num%10; 
		num = num/10; 
	} 
	return rev_num; 
} 

/* Driver program to test reversDigits */
int main() 
{ 
	int num = 5896; 
	printf("Reverse of no. is %d", reversDigits(num)); 
	return 0; 
} 
