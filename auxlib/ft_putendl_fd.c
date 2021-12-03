#include <unistd.h>

//Outputs the string ’s’ to the given file
//descriptor, followed by a newline.

void	ft_putendl_fd(char *s, int fd)
{
	int	size;

	size = strlen(s);
	write(fd, s, size);
	write(fd, '\n', 1);
}
