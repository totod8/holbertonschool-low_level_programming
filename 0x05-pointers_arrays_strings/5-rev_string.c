#include "holberton.h"

/**
 * rev_string - write in reverse and normal
 * @s: parameter
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	int cont;
	int j;
        
        

	cont = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		
		cont = cont + 1;
	}

	cont = cont - 1;
	for(j = 0; j <= cont; j++)
	{
		for (i = cont; i >=0 ; i--)
		{
			
			s[j]=s[i];
			
			
		

		
	
		}
	}
	       
}
