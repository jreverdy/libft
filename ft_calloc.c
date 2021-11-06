#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*allocated_memory;
	size_t	totalsize;

	TotalSize = elementCount * elementSize;
	allocated_memory = malloc(TotalSize);
	if (!allocated_memory)
		return (NULL);
	ft_bzero(allocated_memory, TotalSize);
	return (allocated_memory);
}
