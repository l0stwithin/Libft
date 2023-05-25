#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

void	test_strlcat(void)
{
	size_t	size;
	int		N;
	char	*dst;
	char 	*src;
	int		ret;

	// case 0: size < strlen(dst)
	// N = -2;
	// src = "Almost there!";
	// dst = malloc(100);
	// ft_strlcpy(dst, "Hello", 25);
	// size = ft_strlen(dst) + N;
	// ret = ft_strlcat(dst, src, size);
	// printf("%s\n", dst);
	// printf("%d\n", ret);
	// free(dst);

	// case 1: size = strlen(dst) - 1
	// N = -1;
	// src = "Almost there!";
	// dst = malloc(100);
	// ft_strlcpy(dst, "Hello", 25);
	// size = ft_strlen(dst) + N;
	// ret = ft_strlcat(dst, src, size);
	// printf("%s\n", dst);
	// printf("%d\n", ret);
	// free(dst);

	// case 2: size = strlen(dst)
	// N = 0;
	// src = "Almost there!";
	// dst = malloc(100);
	// ft_strlcpy(dst, "Hello", 25);
	// size = ft_strlen(dst) + N;
	// ret = ft_strlcat(dst, src, size);
	// printf("%s\n", dst);
	// printf("%d\n", ret);
	// printf("%zu\n", ft_strlen(dst));
	// free(dst);

	// case 3: size = strlen(dst) + 1
	N = 1;
	src = "Almost there!";
	dst = malloc(100);
	ft_strlcpy(dst, "Hello", 25);
	size = ft_strlen(dst) + N;
	ret = strlcat(dst, src, size);
	printf("%s\n", dst);
	printf("%d\n", ret);
	printf("%zu\n", ft_strlen(dst));
	free(dst);
	// case 4: size > strlen(dst) + 1 && size < strlen(dst) + strlen(src)
	// case 5: size = strlen(dst) + strlen(src)
	// case 6: size = strlen(dst) + strlen(src) + 1
	// case 7: size > strlen(dst) + strlen(src) + 1
	// case 8: dst is NULL
	// case 9: src is NULL
	// case 10: both dst and src is NULL
	// case 11: dst has 0 space allocated
	// N = 1;
	// src = "Almost there!";
	// dst = malloc(0);
	// size = N;
	// ret = strlcat(dst, src, size);
	// printf("%s\n", dst);
	// printf("%d\n", ret);
	// free(dst);
	// case 12: size is 0
	// 	src = "Almost there!";
	// 	dst = malloc(100);
	// 	N = 1;
	// 	size = N;
	// 	ret = strlcat(dst, src, size);
	// 	printf("%s\n", dst);
	// 	printf("%d\n", ret);
	// 	free(dst);
}

void	test_strncmp(void)
{
	char	*str1 = "Hello\x8A";
	char	*str2 = "Hello";

	printf("%d\n", ft_strncmp(str1, str2, 6));
	printf("%d\n", strncmp(str1, str2, 6));
}

void	test_memchr(void)
{
	// case 0: a negative ascii input
	// int c = -256;
	// char *str = "Hallo und Wilkommen!";
	// printf("%d\n", !((unsigned char *)ft_memchr(str, c, 10)));
	// printf("%d\n", !((unsigned char *)memchr(str, c, 10)));

	// case 1: a few matching chars
	// int c = 'l';
	// char *str = "Hallo und Wilkommen!";
	// printf("%s\n", (unsigned char *)ft_memchr(str, c, 10));
	// printf("%s\n", (unsigned char *)memchr(str, c, 10));

	// case 2: no matching chars
	// int c = 'h';
	// char *str = "Hallo und Wilkommen!";
	// printf("%d\n", !((unsigned char *)ft_memchr(str, c, 10)));
	// printf("%d\n", !((unsigned char *)memchr(str, c, 10)));

	// case 3: one matching char
	int c = 'i';
	char *str = "Hallo und Wilkommen!";
	printf("%s\n", (unsigned char *)ft_memchr(str, c, 12));
	printf("%s\n", (unsigned char *)memchr(str, c, 12));

	// case 4: number of bytes to read at the boundary
	// case 5: number of bytes to read just inside boundary
}

int	main(void)
{
	// test_strlcat();
	// test_strncmp();
	test_memchr();
}