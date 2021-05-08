#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			len_s1;
	size_t			len_s2;
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 == 0 && len_s2 == 0)
		return (0);
	i = 0;
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (dst[i] == src[i] && i < n)
		i++;
	return (dst[i] - src[i]);
}
