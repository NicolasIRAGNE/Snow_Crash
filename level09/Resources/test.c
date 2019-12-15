#include <fcntl.h>
#include <unistd.h>
main()
{
	char buf[256];
	int fd = open("./token", O_RDONLY);

	int i = 0;
	int j = read(fd, buf, 256);

	while (i < j - 1)
	{
		printf("%c", buf[i] - i);
		i++;
	}
	printf("\n");
}
