#include <stdio.h>
int	ft_str_is_numeric(char *str);

int	main(void)
{
int r = 0;
    r = ft_str_is_numeric("1212331");
    printf("%d", r);
    return 0;
}
