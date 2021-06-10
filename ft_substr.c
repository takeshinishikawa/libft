#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	counter;
	size_t	needle;

	counter = 0;
	needle = start;
	if (s == NULL)
		return (NULL);
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (counter < ft_strlen(s) && counter < len)
	{
		substr[counter] = s[needle];
		counter++;
		needle++;
	}
	substr[counter] = '\0';
	return (substr);
}
