#include "libtf.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = 1;
	result = 0;
	while (nptr[i] >= '\t' && nptr[i] <= '\r' || nptr == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nprt[i] == '-')
			signal = signal * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10;
		result = result + nptr[i] - '0';
		i++;
	}
	return (result * signal)
}