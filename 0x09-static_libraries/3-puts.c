#include "main.h"                                   

                                                    

/**                                                 
 *
 *  *  _puts - Write a function that prints a string, f
 *
 *  ollowed by a new line                               
 *
 *   *                                                  
 *
 *    *  @str: This is input string                      
 *
 *     *  Description: Write a function that prints a stri
 *
 *     ng                                                  
 *
 *      *                                                  
 *
 *       *  Return: a string.                               
 *
 *        */                                                 

void _puts(char *str)                               

{                                                   

	        int i;                                      

		                                                    

		        for (i = 0; str[i] != '\0'; ++i)            

				        {                                           

						                _putchar(str[i]);                   

								        }                                           

			        _putchar('\n');                             

} 
