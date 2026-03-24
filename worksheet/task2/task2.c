/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Fizeen Farooq
 * ID: 201877255
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	long decimal= 0;
	char hex[9];
	
	printf("Enter a hexadecimal: ");
    scanf("%8s", hex); 

	int len = strlen(hex);

	for(int i = 0; i < len; i++) {

       char c = hex[i];
       int value;

	// if input contains invalid hex digit
	 
	     if(c >= '0' && c <= '9') {

		    value = c - '0';

	     } else if (c >= 'A' && c <= 'F') {

		    value = c - 'A' + 10;

	     } else if (c >= 'a' && c <= 'f') {

	        value = c-'a' + 10; 
	    } else {
		    printf("Error: Invalid Hexadecimal\n");
			
			return 0;
	    }
    
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	    decimal = decimal * 16 + value;

	printf("Decimal : %ld\n" , decimal);

	return 0;
	
    }