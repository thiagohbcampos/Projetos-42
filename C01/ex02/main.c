#include <stdio.h> 
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int	valuea;
	int	valueb;

	valuea = 2;
	valueb = 3;
	a = &valuea;
	b = &valueb;
	printf("%d", *a);
	printf("%d", *b);
	ft_swap(a, b);
	printf("%d", *a);
	printf("%d", *b);
}
