int GCD(int x, int y)
{
	if(x == 0) { return y; }
	return GCD(y % x, x);
}
