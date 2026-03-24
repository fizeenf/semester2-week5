/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:
 * ID: 
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
    scanf("%s", hex); 

	for(int i=0; i<strlen(hex) i++)

       char c = hex[i];
       int value;

	// if input contains invalid hex digit
    if(char>='0' && char<= '9') {
		value = c - '0'
	} else if (char>='A' && char<= 'F') {
		value = c - 'A' + 10;

	} else if (char>='a' && char<='f')
	    value = c-'a' + 10; 
	} else {
		printf("Error: Invalid Hexadecimal\n");

		return 0;
	}

	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	decimal = decimal*16 + value;
	
	printf("decimal:%ld\n", decimal);
	
	return 0;
}