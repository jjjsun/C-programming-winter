double count(double n)
{
	if (n = 1)
		return 1;
	else 
		return (1 / n + count(n - 1));
}
