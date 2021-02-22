#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int front;
 	int temp;
 
 	front = 0;
 	size--;
 	while (front < size)
 	{
 		temp = tab[front];
 		tab[front] = tab[size];
 		tab[size] = temp;
 		front++;
 		size--;
 	}
}

int	main(void)
{
	int i = 0;
	int arr[5] = { 1,2,3,4,5 };
    	int *tab = arr;
	int size = 5;

	for (i = 0; i < sizeof(arr)/sizeof(int); i++)
        	printf("%d ", tab[i]);
    	printf("\n");
	
	ft_rev_int_tab(tab, size);
	
	for (i = 0; i < sizeof(arr)/sizeof(int); i++)
        	printf("%d ", tab[i]);
   	printf("\n");
	return 0;
}
