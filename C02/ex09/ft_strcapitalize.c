char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	controler;

	counter = 0;
	controler = 0;
	while (str[counter] != '\0')
	{
		if (controler == 0 && (str[counter] >= 'a' && str[counter] <= 'z'))
		{	
			str[counter] = str[counter] - 32;
			controler ++;
		}	
		else if (controler > 0 && (str[counter] >= 'A' && str[counter] <= 'Z'))
			str[counter] = str[counter] + 32;
		else if ((str[counter] < '0' || str[counter] > '9')
			&& (str[counter] < 'A' || str[counter] > 'Z')
			&& (str[counter] < 'a' || str[counter] > 'z'))
			controler = 0;
		else
			controler++;
		counter++;
	}
	return (str);
}
