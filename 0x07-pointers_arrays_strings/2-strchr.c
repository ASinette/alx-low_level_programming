#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: character to find
 * Return: pointer to first occurence of c character
 */

char *_strchr(char *s, char c)
<<<<<<< HEAD
	
=======
>>>>>>> 224b8e57151eb2c95888167e5db715df2accffc4
{
unsigned int i;

<<<<<<< HEAD
unsigned int i;



for (i = 0; s[i] != '\0'; i++)

if (s[i] == c)

break;

return (s[i] == c ? (s + i) : '\0');

=======
for (i = 0; s[i] != '\0'; i++)
if (s[i] == c)
break;
return (s[i] == c ? (s + i) : '\0');
>>>>>>> 224b8e57151eb2c95888167e5db715df2accffc4
}
