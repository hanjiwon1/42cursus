#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	test_strlcat(void)
{
	char *src = "abcdef";
	char dest1[70] = "123";
	char dest2[70] = "123";
	printf("dest1: %s\n", dest1);
	printf("%lu\n", strlcat(dest1, src, 6));
	printf("dest1: %s\n", dest1);
	printf("dest2: %s\n", dest2);
	printf("%lu\n", ft_strlcat(dest2, src, 6));
	printf("dest2: %s\n", dest2);
}

void	test_strchr(void)
{
	const char *s = "abcdcefg";
	char c = 'c';
	printf("strchr : %s\n", strchr(s, c));
	printf("ft_strchar : %s\n", ft_strchr(s, c));
}

void	test_strrchr(void)
{
	const char *s = "abcdedfga";
	char c = 'a';
	printf("strrchr : %s\n", strrchr(s, c));
	printf("ft_strrchar : %s\n", ft_strrchr(s, c));
}

void	test_strnstr(void)
{
	const char *haystack = "jiwon is good girl";
	const char *needle;
	size_t		len = 40;

	//printf("strnstr : %s\n", strnstr(haystack, needle, len));
	printf("ft_strnstr : %s\n", ft_strnstr(haystack, needle, len));
}

void	test_strncmp(void)
{
	const char	*s1 = "abcb";
	const char	*s2 = "abcd";
	size_t		n = -1;
	printf("strncmp : %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, n));
}

int	main(void)
{
	test_strncmp();
	return (0);
}
