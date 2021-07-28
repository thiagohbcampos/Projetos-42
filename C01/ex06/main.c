#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		n;

	str = "Teste de Tamanho de Texto";
	n = ft_strlen(str);
	printf("Tamanho  = %d", n);
}
