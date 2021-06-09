#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	len = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		len--;
	}
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
