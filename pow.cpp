double pow(double x, int n)
{
	if(0 == n)
	{
		return 1.0;
	}
	double res = 0.0;
	while(n != 0)
	{
		if(n & 0x1)
		{
			res += x; 
		}
		x *= x;
		n >>= 1;	
	}
	return res;
}
