#include <stdio.h>
int	ft_str_is_alpha(char *str);

int	main(void)
{
int r = 0;
    r = ft_str_is_alpha(" ");
    printf("%d", r);
    return 0;
}