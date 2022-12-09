#include <stdio.h>                                                                                                                                         
/**                                                                                                                                                        
 * main -Print the size of various types on the computer.
 * Code by Obinna                                                                                           
 * * Return: 0 if Success                         
 */                                                                                                                                          
int main(void)                                                                                                                                           
{  
		char a;
		int b;
		long int c;
		long long int d;
		float f;

		printf("Size of a char: %1u bytes(S)\n", (unsigned long)sizeof(a);
		printf("Size of an int: %1u bytes(S)\n", (unsigned long)sizeof(b);
		printf("Size of a long int: %1u bytes(S)\n", (unsigned long)sizeof(c);    
		printf("Size of a long |long int: %1u bytes(S)\n", (unsigned long)sizeof(d);                 
		printf("Size of a float: %1u bytes(S)\n", (unsigned long)sizeof(f);                                                                     
		return (0);
}	
