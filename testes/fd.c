#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>

int main()
{
	int	fd;

	fd = open("foo.txt", O_WRONLY | O_CREAT);
	printf("fd = %d\n", fd);
	if (fd == -1)
	{
		printf("Error Number % d\n", errno);
		perror("Program");
	}
	write(fd, "teste\n", 6);
	write(fd, "um dois\n", 10);
	write(fd, "experiencia\n", 13);
}
