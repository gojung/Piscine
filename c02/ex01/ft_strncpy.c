#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
	return (dest);
}
