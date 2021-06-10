#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	counter;
	size_t	needle;
	size_t	s_size;

	counter = 0;
	needle = start;
	if (s == NULL)
		return (NULL);
	s_size = ft_strlen(s);
	substr = (char *)malloc(s_size + 1);
	if (substr == NULL)
		return (NULL);
	while (start < s_size && counter < ft_strlen(s) && counter < len)
	{
		substr[counter] = s[needle];
		counter++;
		needle++;
	}
	substr[counter] = '\0';
	return (substr);
}
