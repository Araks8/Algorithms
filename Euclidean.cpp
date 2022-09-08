int GCD(const int x,const int y)
{
	if(x == 0) { return y; }
	return GCD(y % x, x);
}
