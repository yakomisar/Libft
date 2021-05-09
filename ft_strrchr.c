#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	find;
	int		len;

	find = (char)c;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == find)
			return ((char *)&s[len]);
		len--;
	}
	if (s[len] == find)
		return ((char *)s);
	return (NULL);
}
