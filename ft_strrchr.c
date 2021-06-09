#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = NULL;
	if (!s || !c)
		return ((char *)s);
	while (*s)
	{
		if (*s == (unsigned char)c)
			temp = s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return ((char *)temp);
}
