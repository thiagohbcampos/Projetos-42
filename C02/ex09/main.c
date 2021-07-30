#include <stdio.h>
char	*ft_strcapitalize(char *str);

int	main(void)
{
	char frase[] = "oi, tUDo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("%s", ft_strcapitalize(frase));
    return 0;
}