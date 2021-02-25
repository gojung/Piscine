#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i= 0;
	while(str[i])
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			return 1;
		}
		i++;
	}
	return 0;
}

int	main(void)
{
	int result = ft_str_is_alpha("u201502113");
	printf("%d", result);
	result = ft_str_is_alpha("325234");
	printf("%d", result);
	return 0;
}
