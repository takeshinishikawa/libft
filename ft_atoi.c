#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r'
		|| c == '\f' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long int	num;
	int			signal;
	int			res;

	num = 0;
	signal = 1;
	res = (int)num * signal;
	while ((ft_isspace(*str)))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (res >= LONG_MAX / 10 && (*str - '0') > LONG_MAX % 10)
			return ((int)LONG_MAX);
		else if (res <= LONG_MIN && (*str - '0') > -(LONG_MIN % 10))
			return ((int)LONG_MIN);
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (res);
}
