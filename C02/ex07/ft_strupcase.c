char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 97 && str[counter] <= 122)
		{
			str[counter] = str[counter] - 32;
		}
		counter ++;
	}
	return (str);
}
