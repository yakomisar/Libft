#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		dest = (char *)dst;
		source = (char *)src;
		while (len > 0)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	}
	return (dst);
}
