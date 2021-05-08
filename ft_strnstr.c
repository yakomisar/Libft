#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;
	size_t	i;
	size_t	place;

	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)&haystack[0]);
	place = 0;
	while (haystack[place] != '\0')
	{
		i = 0;
		if (haystack[place] == needle[i])
		{
			while (haystack[place + i] && (haystack[place + i] == needle[i]) && needle[i] && i < len)
				i++;
			if (!needle[i])
				return ((char *)&haystack[place]);
		}
		place++;
	}
	return (NULL);
}
