#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	print(int print[], int size)
{
	int	d;

	d = 0;
	while (d < size)
	{
		printf("%d", print[d]);
		d++;
	}
}

int	main(void)
{
	int	tab[] = {0, -1, 1, 7, 3, 2, 3, 4};
	int	size;

	size = 8;
	ft_rev_int_tab(tab, size);
	print(tab, size);
}
