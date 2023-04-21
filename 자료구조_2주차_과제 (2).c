int count(int n,int k)
{
	if (n == 0 || n == k)
		return(1);
	else if (0 < k && k < n) {
		return count(n - 1, k - 1) + count(n - 1, k);
	}
}