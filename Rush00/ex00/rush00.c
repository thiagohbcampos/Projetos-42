void	ft_putchar(char c);

void	draw_rectangle(int line_position, int column_position, int x, int y)
{
	if (line_position == 1 || line_position == y)
	{
		if (column_position == 1 || column_position == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		if (column_position == 1 || column_position == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{	
	int		line_position;
	int		column_position;

	line_position = 1;
	while (line_position <= y)
	{
		column_position = 1;
		while (column_position <= x)
		{			
			draw_rectangle(line_position, column_position, x, y);
			column_position++;
		}
		ft_putchar('\n');
		line_position++;
	}	
}
