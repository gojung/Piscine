#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{

	int temp;
	int index;

	index = 0;
	while (index <= (size - 2))
	{
		if (tab[index] > tab[index + 1])
		{
			temp = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = temp;
			index = 0;
		}
		else
		{
			index++;
		}
	}
}

int	main(void)
{
	int arr[5] = {4, 2, 1, 5, 3};
	int *tab = arr;
	int size = 5;
	int i = 0;

	for (i = 0; i < sizeof(arr)/sizeof(int); i++)
        	printf("%d ", tab[i]);
    	printf("\n");

	ft_sort_int_tab(tab, size);

	for (i = 0; i < sizeof(arr)/sizeof(int); i++)
        	printf("%d ", tab[i]);
    	printf("\n");
	return 0;
}
