#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	if ((src == NULL) || (dst == NULL))
		return (NULL);
	destination = (char *)dst;
	source = (char *)src;
	i = 0;
	while (n && (destination[i] != (unsigned char)c))
	{
		destination[i] = source[i];
		n--;
		i++;
	}
	return (destination);
}
