int lengthOfLastWord(const char *s) {
	int ret = 0;
	int temp = 0;
	const char *ptr = s;
	while(*ptr != '\0')
	{
		if (*ptr == ' ')
		{
			if (temp > 0)
			{
				ret = temp;
			}
			temp = 0;
		}
		else
		{
			++temp;
		}
		++ptr;
	}
	if (temp > 0)
	{
		ret = temp;
	}
	return ret;
}
