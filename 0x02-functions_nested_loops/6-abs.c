#include "main.h"
/**
 * _abs - value absolute
 * @n: the int to print
 * Return: 0 Always
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
