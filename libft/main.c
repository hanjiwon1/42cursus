#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char *src = "abc214124";
	char dest1[] = "123";
	char dest2[] = "123";
	printf("dest1: %s\n", dest1);
	printf("%lu\n", strlcpy(dest1, src, strlen(dest1)));
	printf("dest1: %s\n", dest1);
	printf("dest2: %s\n", dest2);
	printf("%lu\n", ft_strlcpy(dest2, src, strlen(dest2)));
	printf("dest2: %s\n", dest2);
	return (0);
}
