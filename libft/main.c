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
	//printf("%lu\n", strlcat(dest1, src, 6));
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
	// const char *haystack = "jiwon is good girl";
	// const char *needle;
	// size_t		len = 40;

	//printf("strnstr : %s\n", strnstr(haystack, needle, len));
	//printf("ft_strnstr : %s\n", ft_strnstr(haystack, needle, len));
}

void	test_strncmp(void)
{
	const char	*s1 = "abcb";
	const char	*s2 = "abcd";
	size_t		n = -1;
	printf("strncmp : %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, n));
}

void	test_atoi(void)
{
	const char *str = "aa";
	printf("atoi : %d\n", atoi(str));
	printf("ft_atoi : %d\n", ft_atoi(str));
}

#include <ctype.h>

void	test_isalpha(void)
{
	int c = '0';
	printf("isalpha : %d\n", isalpha(c));
	printf("ft_isalpha : %d\n", ft_isalpha(c));
}

void	test_isdigit(void)
{
	int c = 'a';
	printf("isdigit : %d\n", isdigit(c));
	printf("ft_isdigit : %d\n", ft_isdigit(c));
}

void	test_isalnum(void)
{
	int c = 'A';
	printf("isalnum : %d\n", isalnum(c));
	printf("ft_isalnum : %d\n", ft_isalnum(c));
}

void	test_isascii(void)
{
	int c = '-';
	printf("isascii : %d\n", isascii(c));
	printf("ft_isascii : %d\n", ft_isascii(c));
}

void	test_isprint(void)
{
	int c = 0;
	while (c < 128)
	{
		printf("isprint %d : %d\n",c ,  isprint(c));
		printf("ft_isprint %d : %d\n",c, ft_isprint(c));
		c++;
	}
}

void	test_toupper_tolower(void)
{
	int c = '0';
	printf("toupper : %c\n", toupper(c));
	printf("ft_toupper : %c\n", ft_toupper(c));
	printf("\n");
	printf("tolower : %c\n", tolower(c));
	printf("ft_tolower : %c\n", ft_tolower(c));
}

int	main(void)
{
	test_toupper_tolower();
	return (0);
}
