#include <stdio.h>
/**
* main - Check description
* Description: It prints the word _putchar, followed by a new line.
* Return: 0 (Success)
*/
int main(void)
{
char word[7] = "putchar";
int i;
for (i = 0; i < 7; i++)
_putchar(word[i]);
_putchar('\n');
return (0);
}
