#include "main.h"
/**
 *print_alphabet_x10 - Thia program prints the alphabets
 *10 time in lower case.
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
char alphabet;
int count;
for (count = 0; count < 10; count++)
{
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
}
