/**
 * prime - function
 * @num: input 1
 * @i: input 2
 * Return: value
 */
int prime(int num, int i)
{
	if (i < num && num % i != 0)
		return (prime(num, i + 1));
	if (i < num && num % i == 0)
		return (0);
	if (i == num)
		return (1);
	else
		return (0);
}

/**
 * is_prime_number - function
 * @n: input 1
 * Return: prime 2
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
