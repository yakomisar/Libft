#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	new = (void *)malloc(size * count);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, (size * count));
	return (new);
}
