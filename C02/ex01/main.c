#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char fraseA[] = "biscoito";
	char fraseB[] = "joia";
	ft_strncpy(fraseA, fraseB, 2);
    printf("%s", fraseA);
    return 0;
}
