#include<stdio.h> 

int binaryToDecimal(int n) {		// Function to convert binary to decimal 
int num = n; 
int dec_value = 0; 
int base = 1; 		// Initializing base value to 1, i.e 2^0 
int temp = num; 

while (temp) { 
	int last_digit = temp % 10; 
	temp = temp / 10; 
	dec_value += last_digit * base; 
	base = base * 2; 
	} 
	return dec_value; 
} 

int main() // Driver program to test above function 
{ 
int num = 101010; 
printf("\n Decimal number of binary is - %d ",binaryToDecimal(num) ); 
} 

