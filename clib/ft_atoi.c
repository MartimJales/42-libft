#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	base;
	int	i;

	sign = 1;
	base = 0;
	i = 0;
	// Review the part of the positive sign because
	// I dont know if "+++++12 == 12 or zero"
	while (str[i] == ' ' || str[i] == '+')
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		base = 10 * base + (str[i] - '0');
		i++;
	}
	return (base * sign);
}
