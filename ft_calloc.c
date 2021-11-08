#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*allocated_memory;
	size_t	totalsize;

	totalsize = elementCount * elementSize;
	allocated_memory = malloc(totalsize);
	if (!allocated_memory)
		return (NULL);
	ft_bzero(allocated_memory, totalsize);
	return (allocated_memory);
}
