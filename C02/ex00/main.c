#include <stdio.h>
char	*ft_strcpy(char *dest, char *src);

int main()
{
    char fraseA[] = "salada";
    char fraseB[] = "bala";
    ft_strcpy(fraseA, fraseB);
    printf("%s", fraseA);
    return 0;
}