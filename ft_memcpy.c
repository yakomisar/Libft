#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;
	size_t	i;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
