#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}

	return i;
}

int main(void)
{
	int answer;
	char* str = "Gooah";
	answer = ft_strlen(str);
	printf("%d", answer);
	return 0;
}
