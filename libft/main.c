#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	test_memset(void)
{
	//char	*s1 = NULL;
	char	*s2 = NULL;
	int		c = 65;

	//memset(s1, c, 20);
	ft_memset(s2, c, sizeof(s2));
	//printf("memset : %s\n", s1);
	printf("ft_memset : %s\n", s2);
}

void	test_memcpy(void)
{
	char dest1[20];
	char dest2[20];
	//char *src = "abc";

	memcpy(dest1, "123", 2);
	ft_memcpy(dest2, "123", 2);
	printf("memcpy : %s\n", dest1);
	printf("ft_memcpy : %s\n", dest2);
}

void	test_memccpy(void)
{
	//char	dest1[20];
	char	dest2[20];
	char	*src = NULL;
	char	c = 'g';
	size_t	n = 6;
	//memccpy(dest1, src, c, n);
	ft_memccpy(dest2, src, c, n);
	//printf("memccpy: %s\n", dest1);
	printf("ft_memccpy : %s\n", dest2);
}

void	test_memmove(void)
{
	char dest1[10];
	char dest2[10];
	char src1[10] = "12345";
	char src2[10] = "12345";
	size_t n = 0;

	printf("memmove : %s\n", memmove(dest1, src1, n));
	printf("ft_memmove : %s\n", ft_memmove(dest2, src2, n));
	printf("dest1 : %s\n", src1);
	printf("dest2 : %s\n", src2);
}

void	test_memchr(void)
{
	char *s1 = "1234567";
	char c = '7';
	size_t n = 40;
	printf("memchr : %s\n", memchr(s1, c, n));
	printf("ft_memchr : %s\n", ft_memchr(s1, c, n));
}

void	test_memcmp(void)
{
	char *s1 = "a123";
	char *s2 = "a123";
	size_t n = 0;

	printf("memcmp : %d\n", memcmp(s1, s2, n));
	printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, n));
}

void	test_strlcpy(void)
{
	char *src = "abcde";
	char dest1[10] = "123";

	printf("%lu\n", ft_strlcpy(dest1, src, (10)));
	printf("%s\n", dest1);
}

void	test_strlcat(void)
{
	char *src = "123456";
	char dest1[5] = "abcd";
	char dest2[5] = "abce";
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

void	test_strdup(void)
{
	const char *s = "";
	printf("%s\n", ft_strdup(s));
}

void	test_substr(void)
{
	char const *s;
	unsigned int start = 6;
	size_t len = 5;

	printf("%s\n", ft_substr(s, start, len));
}

void	test_strjoin(void)
{
	char const *s1 = "1235677";
	char const *s2 = "abcde";

	printf("%s\n", ft_strjoin(s1, s2));
}

void	test_strtrim(void)
{
	char const *s1 = "abcde";
	char const *set = "abce";
	printf("%s\n", ft_strtrim(s1, set));
}

void	test_split(void)
{
	const char *s = NULL;
	char c = 'p';
	char **temp;
	size_t i;
	
	i = 0;
	temp = ft_split(s, c);
	while (temp[i])
	{
		printf("temp[%lu] : %s\n", i , temp[i]);
		i++;
	}
}

void	test_itoa(void)
{
	int n = 2147483647;
	printf("ft_itoa : %s\n", ft_itoa(n));
}

int	main(void)
{
	test_itoa();
	return (0);
}
