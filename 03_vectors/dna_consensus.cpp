int maximum(int a, int b, int c) 
{
	if (a > b)
	{
		if (a > c)
		{
			return a;
		}
	}
	else if (b > a) 
	{
		if (b > c)
		{
			return b; 
		}
	}
	else if (c > b)
	{
		if (c > a)
		{
			return c;
		}
	}
}