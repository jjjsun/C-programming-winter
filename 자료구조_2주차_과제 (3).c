int count(int n)
{
	if (n == 0)
		return 1;
	int result = 1;
	for (int i = n; i >= 1; i++) {
		result *= i;
	}
	return result;
}