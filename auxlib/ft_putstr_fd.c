#include <unistd.h>

//Outputs the string ’s’ to the given file
//descriptor.

void	ft_putstr_fd(char *s, int fd)
{
	int	size;

	size = strlen(s);
	write(fd, s, size + 1);
}
