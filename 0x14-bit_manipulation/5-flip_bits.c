/**
 *flip_bits - return number of bits that would need to be flipped to
 *transform one number to another
 *
 *@n: first number
 *@m: second number
 *
 *Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorVal = n ^ m;
	unsigned int count = 0;

	while (xorVal)
	{
		if (xorVal & 1ul)
			count++;
		xorVal = xorVal >> 1;
	}

	return (count);
}
