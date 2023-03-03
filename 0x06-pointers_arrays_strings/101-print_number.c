#include <stdio.h>
/*
*this program prints out strings
*@main: prints numbers only
*Returns 0
*This is a comment
*@p: this is a pointer
*/
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
