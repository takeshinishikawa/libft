#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;
	size_t	aux;

	h = 0;
	n = ft_strlen(needle);
	if (n == 0)
		return ((char *)haystack);
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	while (haystack[h] && h < len)
	{
		aux = 0;
		while ((haystack[h + aux] == needle[n]) && ((h + aux) < len))
		{
			if (aux == n - 1)
				return ((char *)haystack + h);
			n++;
		}
		h++;
	}
	return (0);
}
