#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int n, num=1, f1=0, f2=1, f3;
printf("Enter the number of terms of Fibonacci series\n");
scanf("%d",&n);
printf("The first n Fibonacci series is :\n");
while(num<=n)
{
f3=f1+f2;
printf("%d\n",f3);
f1=f2;
f2=f3;
num++
}
return 0;
}
