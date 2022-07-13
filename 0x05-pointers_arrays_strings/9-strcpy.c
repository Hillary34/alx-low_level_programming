#include "main.h"
/**
* _strcpy - a function that copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* @dest: A pointer to destination of string
* @src: A pointer to source string to copy from
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int n = 0;
int i;
while (src[n] != '\0')
{
n++;
}
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
i = i;
while (i <= n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
