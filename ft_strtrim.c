#include "libft.h"

static int	ft_char_check(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;
	size_t	start;
	size_t	finish;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	finish = ft_strlen(set);
	i = 0;
	while (s1[start] && ft_char_check(set, s1[start]))
		start++;
	while ((start < finish) && ft_char_check(set, s1[finish - 1]))
		finish--;
	new = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (new == NULL)
		return (NULL);
	while (start < finish)
	{
		new[i] = s1[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
