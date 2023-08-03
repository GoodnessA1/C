#include "main.h"
/**
 * binary_to_uint - Bin to int
 * @c: Character
 *
 * Return: dec
 */
int binary_to_uint(const char *c)
{
	unsigned int result = 0;
	int i, pow;

	for (i = 0; c[i] != '\0'; i++)
		;

	for (pow = 1; i >= 0; i--)
	{
		if (c[i] == '1')
		{
			result += pow;
		}
		pow *= 2;
	}

	return (result);
}
