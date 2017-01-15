char *_strstr(char *haystack, char *needle)
{
	int h, n, s;

	h = 0;
	while (haystack[h] != '\0')
	{
		n = 0;
		s = h;
		while (needle[n] != '\0' && haystack[h] != '\0' &&
		       haystack[h] == needle[n])
		{
			h++;
			n++;
		}
		if (needle[n] == '\0')
		{
			return (haystack + s);
		}
		h = s + 1;
	}
	return ('\0');
}
