#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 1;
    int num2 = 2;

    ft_swap(&num1, &num2);
    printf("%d %d\n", num1, num2);
    return 0;
}
