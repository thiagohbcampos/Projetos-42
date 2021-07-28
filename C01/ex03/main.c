#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 10;
	b = 5;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("\nEndereço Div = %p\n", div);
	printf("Valor Div = %d\n", *div);
	printf("Endereço Mod = %p\n", mod);
	printf("Valor Mod = %d\n", *mod);
}
