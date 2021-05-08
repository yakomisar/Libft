#include "libft.h"

static int	ft_intlen(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		counter++;
		n = n * (-1);
	}
	while (n)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char		*result;
	size_t		len;

	if (n == (-2147483647 -1))
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n) + 1;
	result = (char *)malloc(sizeof(char) * len);
	if (result == NULL)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	result[len - 1] = '\0';
	while (n)
	{
		len--;
		result[len - 1] = (n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
