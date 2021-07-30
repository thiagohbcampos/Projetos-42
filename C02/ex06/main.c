#include <stdio.h>
int	ft_str_is_printable(char *str);

int	main(void)
{
int r = 0;
    	r = ft_str_is_printable("¶");
    	printf("%d", r);
    return 0;
}
