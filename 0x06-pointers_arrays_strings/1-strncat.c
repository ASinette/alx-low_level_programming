#include "main.h"
<<<<<<< HEAD


=======
>>>>>>> 6ba2d18ae3cbf49e74a4aa3a433a9be80000e19a

/**
 *_strncat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncat(char *dest, char *src, int n)
<<<<<<< HEAD
	
=======
>>>>>>> 6ba2d18ae3cbf49e74a4aa3a433a9be80000e19a
{
int i = 0, k = 0;

<<<<<<< HEAD
int i = 0, k = 0;



while (dest[i] != '\0')

i++;



while (src[k] != '\0' && n > k)

{

dest[i] = src[k];

k++;

i++;

}

if (n > 0)
	
{

dest[i] = '\0';

}



return (dest);
=======
while (dest[i] != '\0')
i++;

while (src[k] != '\0' && n > k)
{
dest[i] = src[k];
k++;
i++;
}
if (n > 0)
{
dest[i] = '\0';
}
>>>>>>> 6ba2d18ae3cbf49e74a4aa3a433a9be80000e19a

return (dest);
}
