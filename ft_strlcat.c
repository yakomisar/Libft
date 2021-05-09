#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= destlen)
		return (dstsize + srclen);
	while (src[i] != '\0' && (destlen + i + 1 < dstsize))
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = 0;
	return (destlen + srclen);
}
