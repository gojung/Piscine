#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_num = *a;
	int b_num = *b;
	(*a) = a_num / b_num;
	(*b) = a_num % b_num;
}

int main(void)
{
	int a = 13;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("div: %d, mod: %d", a, b);
	return 0;
}
