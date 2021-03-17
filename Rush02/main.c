#include "stdrush02.h"

int	file_to_char(char *file){
	int fd;
	char *buf;
	int length;
	ssize_t  rd_size;

	if ((fd = open(file, O_RDONLY)) < 0)
		return (0);
	buf = malloc(sizeof(char) * 2);
	length  = 0;
	while (read(fd, buf, 1) > 0)
		length ++;

	if (!length)
		return (0);
	free(buf);
	close(fd);
	buf = malloc(sizeof(char) * length + 1);
	if ((fd = open(file, O_RDONLY)) < 0)
		return (0);
	while (read(fd, buf, length) > 0)
	{
		printf("%s", buf);
	}
	return (1);
}

int num_finder(char )

int	is_num_valid(char *num)
{
	int i;
	i = -1;
	while (num[++i])
		if !((num >= '0' && num <= '9'))
			return (0);
	if(!file_to_char(num))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(2, "Error\n", 6);
	else if (argc == 2)
	{
		if(!is_num_valid(argv[1]))
			write(2, "Error\n", 6);
	}
	else if (argc == 3)
	{
		write(1, "new", 3);
	}
	else
	{
		write(2, "Error\n", 6);
	}
	return (0);
}

