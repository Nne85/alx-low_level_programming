#include "main.h"                                   

                                                    

/**                                                 
 *
 *  * _strlen - Function that returns the length of a s
 *
 *  tring                                               
 *
 *   *                                                  
 *
 *    * @s: this is the input string                     
 *
 *     *                                                  
 *
 *      * Description: Write a function that returns the le
 *
 *      ngth of a string.                                   
 *
 *       *                                                  
 *
 *        * Return: the length of a string.                  
 *
 *         */                                                 

int _strlen(char *s)                                

{                                                   

	        int i;                                      

		                                                    

		        for (i = 0; s[i] != '\0'; ++i)              

				                ;                                   

			        return (i);                                 

} 
