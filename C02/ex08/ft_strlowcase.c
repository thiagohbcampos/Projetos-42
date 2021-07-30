char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			str[counter] = str[counter] + 32;
		}
		counter ++;
	}
	return (str);
}
