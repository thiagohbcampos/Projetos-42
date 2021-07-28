#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	size--;
	while (a < size)
	{
		b = tab[a];
		tab[a] = tab[size];
		tab[size] = b;
		a++;
		size--;
	}
}
