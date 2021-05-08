#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	dst_size;
	size_t	i;

	i = 0;
	dst_size = dstsize - 1;
	while (src[i] && (i < dst_size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
