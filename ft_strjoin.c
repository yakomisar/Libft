#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	counter;
	size_t	place;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == NULL)
		return (NULL);
	counter = 0;
	place = 0;
	while (counter < ft_strlen(s1))
	{
		new[counter] = s1[counter];
		counter++;
		place++;
	}
	counter = 0;
	while (counter < ft_strlen(s2))
	{
		new[place + counter] = s2[counter];
		counter++;
	}
	new[place + counter] = '\0';
	return (new);
}
