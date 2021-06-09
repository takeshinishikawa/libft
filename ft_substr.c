#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	counter;

	substr = (char *)malloc(len + 1);
	counter = 0;
	if (substr == NULL)
		return (NULL);
	while (counter < len && s[start] != '\0')
	{
		substr[counter] = s[start];
		counter++;
		start++;
	}
	substr[counter] = '\0';
	return (substr);
}
