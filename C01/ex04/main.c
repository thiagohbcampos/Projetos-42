#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	div;
	int	mod;
	int	*a;
	int	*b;

	div = 10;
	mod = 5;
	a = &div;
	b = &mod;
	ft_ultimate_div_mod(a, b);
	printf("O endereço do a é: %p\n", a);
	printf("O valor do a / b é: %d\n", *a);
	printf("O endereço do b é: %p\n", b);
	printf("O valor de a mod b é: %d\n", *b);
}
