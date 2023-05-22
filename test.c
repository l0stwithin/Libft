#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <bsd/string.h>
#include <ctype.h>

int	main()
{
	// replace with numeral corresponding to function user input
	// testing ft_substr
	char	*str;
	size_t 	N;

	// uncomment only one of these at a time
	str = ft_substr("Hey hey!", 2, 7);	// testing a case where maximum length more than possible length	
	// str = ft_substr("Hey hey!", 4, 2);	// testing a case where maximum length = length
	// str = ft_substr("", 0, 5);			// testing with null input
	// str = ft_substr("Hi!", 6, 2);		// testing for a higher index value than strlen 
	printf("FT_SUBSTR\n");
	printf("%s\n", str);
	free(str);

	// testing ft_strjoin
	// str = ft_strjoin("", "");
	// str = ft_strjoin("", "suffix");
	// str = ft_strjoin("prefix", "");
	str = ft_strjoin("prefix", "suffix");
	printf("FT_STRJOIN\n");
	printf("%s\n", str);
	free(str);

	// testing ft_strtrim
	printf("FT_STRTRIM\n");
	str = ft_strtrim("abcccbcccbab", "abtt");
	// str = ft_strtrim("hello", "");
	// str = ft_strtrim("abcdcdloo", "abcdlo");
	// str = ft_strtrim("", "abedfg");
	printf("%s\n", str);
	free(str);

	// testing ft_split
	char	**strs;
	// char const *str2 = "Hello Hallo Dobry Namaste Nomoskar Hola Bonjour";
	// char	*str = "  Hello Hallo Dobry Namaste    Nomoskar  Hola  Bonjour  ";
	strs = ft_split(" Hello   Hallo Hola    Bonjour Dobry Namaste   ", ' ');
	printf("FT_SPLIT\n");
	size_t i = 0, j;
	while (strs[i] != NULL)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			printf("%c", strs[i][j]);
			j++;
		}
		free(strs[i]);
		printf("\n");
		i++;
	}
	free(strs);

	// testing ft_itoa
	printf("FT_ITOA\n");
	int n;
	n = -2147483648;
	// n = 2147483647;
	// n = 0;
	// n = -42;
	// n = 2;
	// n = -5;
	// n = 42;
	// n = 4509;
	// n = -777;
	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);

	// testing ft_put*_fd
	printf("FT_PUTCHAR\n");
	ft_putchar_fd('#', 1);
	printf("\nFT_PUTSTR\n");
	ft_putstr_fd("H3y!\t:3", 1);
	ft_putstr_fd("", 1);
	printf("\nFT_PUTENDL\n");
	ft_putendl_fd("H0l@", 1);
	ft_putendl_fd("", 1);
	printf("\nFT_PUTNBR\n");
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(4224, 1);
	ft_putchar_fd('\n', 1);

	// testing ft_strmapi and ft_striteri
	void	rem_3(unsigned int i, char *p)
	{
		char	sp;

		sp = ' ';
		if ((i + 1) % 3 == 0)
			*p = sp;
		if (!p)
			return ;
	}

	void	capitalize_1(unsigned int i, char *p)
	{
		if (i == 0 && (*p >= 97 && *p <= 122))
			*p = *p - 32;
	}

	char	rem_4(unsigned int i, char c)
	{
		if ((i + 1) % 4 == 0)
			c = ' ';
		return (c);
	}

	char	lowercase_all(unsigned int i, char c)
	{
		if (i != 0 && (c >= 65 && c <= 90))
			c = c + 32;
		return (c);
	}
	printf("FT_STRITERI\n");
	str = (char *)malloc(13);
	ft_strlcpy(str, "hello World!", 12);
	ft_striteri(str, &rem_3);
	printf("%s\n", str);
	ft_strlcpy(str, "hello World!", 12);
	ft_striteri(str, &capitalize_1);
	printf("%s\n", str);
	printf("FT_STRMAPI\n");
	ft_strlcpy(str, "Hello World!", 12);
	printf("%s\n", ft_strmapi(str, &rem_4));
	ft_strlcpy(str, "Hello World!", 12);
	printf("%s\n", ft_strmapi(str, &lowercase_all));
	free(str);

	// testing ft_strlcpy
	printf("FT_STRLCPY\n");
	str = (char *)malloc(13);
	printf("%zu\n", ft_strlcpy(str, "Hello World!", 12));
	printf("%s\n", str);
	free(str);
	str = (char *)malloc(13);
	printf("VS STRLCPY\n%zu\n", strlcpy(str, "Hello World!", 12));
	printf("%s\n", str);
	free(str);
	
	// testing ft_strlen
	printf("FT_STRLEN\n");
	printf("%zu\n", ft_strlen(""));					// testing null
	printf("%zu\n", strlen(""));
	printf("%zu\n", ft_strlen("Hell0!\n"));			// testing all kinds of values
	printf("%zu\n", strlen("Hell0!\n"));
	printf("%zu\n", ft_strlen("He\0ll0!\n"));		// testing with null inside string
	printf("%zu\n", strlen("He\0ll0!\n"));

	// testing is*.c
	int c;
	const char	*c_in_str;
	// c = 'g';
	// c_in_str = "regular gaming is probably not too good for a balanced life";
	// c = 'B';
	// c_in_str = "Bloody Baron was a Bad Slytherin ghost";
	// c = '9';
	// c_in_str = "There are 9 enneagram types";
	// c = ' ';
	// c_in_str = "";
	c = 'y';
	c_in_str = "#happy";
	// c = '\t';
	// c_in_str = "There is no way I will put a newline here";
	// c = 255;
	// c_in_str = "There is definitely no way I am gonna put that ascii here or maybe I can \xff. Hope this works!";
	// c = 0;
	// c_in_str = "Hmmm\0 The string already ended";
	printf("FT_ISALNUM\n");
	printf("%d\n", (ft_isalnum(c) != 0));
	printf("%d\n", (isalnum(c) != 0));
	printf("FT_ISALPHA\n");
	printf("%d\n", (ft_isalpha(c) != 0));
	printf("%d\n", (isalpha(c) != 0));
	printf("FT_ISASCII\n");
	printf("%d\n", (ft_isascii(c) != 0));
	printf("%d\n", (isascii(c) != 0));
	printf("FT_ISDIGIT\n");
	printf("%d\n", (ft_isdigit(c) != 0));
	printf("%d\n", (isdigit(c) != 0));
	printf("FT_ISPRINT\n");
	printf("%d\n", (ft_isprint(c) != 0));
	printf("%d\n", (isprint(c) != 0));

	// testing to*
	printf("FT_TOUPPER\n");
	printf("%c\n", ft_toupper(c));
	printf("%c\n", toupper(c));
	printf("FT_TOLOWER\n");
	printf("%c\n", ft_tolower(c));
	printf("%c\n", tolower(c));

	// testing ft_strchr and ft_strrchr
	printf("FT_STRCHR\n");
	str = (char *)malloc(250);
	ft_bzero(str, 250);
	if (ft_strchr(c_in_str, c))
	{
		ft_strlcpy(str, ft_strchr(c_in_str, c), ft_strlen(c_in_str) + 1);
		printf("%s\n", str);
		free(str);
	}
	else
		printf("(null)\n");

	str = (char *)malloc(250);
	ft_bzero(str, 250);
	if (strchr(c_in_str, c))
	{
		ft_strlcpy(str, strchr(c_in_str, c), ft_strlen(c_in_str) + 1);
		printf("%s\n", str);
		free(str);
	}
	else
		printf("(null)\n");


	str = (char *)malloc(250);
	ft_bzero(str, 250);
	printf("FT_STRRCHR\n");
	if (ft_strrchr(c_in_str, c))
	{
		ft_strlcpy(str, ft_strrchr(c_in_str, c), ft_strlen(c_in_str) + 1);
		printf("%s\n", str);
		free(str);
	}
	else
		printf("(null)\n");

	str = (char *)malloc(250);
	ft_bzero(str, 250);
	if (strrchr(c_in_str, c))
	{
		ft_strlcpy(str, strrchr(c_in_str, c), ft_strlen(c_in_str) + 1);
		printf("%s\n", str);
		free(str);
	}
	else
		printf("(null)\n");

	str = (char *)malloc(250);
	ft_bzero(str, 250);
	printf("FT_MEMCHR\n");
	n = 11;
	N = ft_strlen(c_in_str) + n;
	if (ft_memchr(c_in_str, c, N))
	{
		ft_strlcpy(str, ft_memchr(c_in_str, c, N), ft_strlen(c_in_str) + 1);
		i = 0;
		N = ft_strlen(str);
		while (i < N)
			printf("%c", str[i++]);
		printf("\n");
		free(str);
	}
	else
		printf("(null)\n");

	printf("vs MEMCHR\n");
	str = (char *)malloc(250);
	ft_bzero(str, 250);
	N = ft_strlen(c_in_str) + n;
	if (ft_memchr(c_in_str, c, N))
	{
		ft_strlcpy(str, ft_memchr(c_in_str, c, N), ft_strlen(c_in_str) + 1);
		i = 0;
		N = ft_strlen(str);
		while (i < N)
			printf("%c", str[i++]);
		printf("\n");
		free(str);
	}
	else
		printf("(null)\n");

	// testing ft_memset //memset does not use 0
	printf("FT_MEMSET\n");
	str = (char *)malloc(13);
	ft_strlcpy(str, "hello World!", 12);
	// c = '\n';
	// c = ' ';
	// c = 'A';
	c = '!';

	// N = 2;
	// N = 8;
	N = 15;
	str = (char *)ft_memset(str, c, N);
	i = 0;
	while (i < 20)
		printf("%c", str[i++]);
	printf("\n");

	// testing ft_memcpy
	printf("FT_MEMCPY & FT_MEMMOVE\n");
	ft_strlcpy(str, "hello World!", 12);
	void *src = str;
	void *dst = malloc(12);
	N = 5;
	size_t	spc;
	spc = 100;
	dst = src + spc;
	dst = ft_memcpy(dst, src, N);
	i = 0;
	while (i < N)
		printf("%c", ((unsigned char *)dst)[i++]);
	printf("\n");

	//testing ft_memmove
	ft_strlcpy(str, "hello World!", 12);
	src = str;
	dst = src + spc;
	dst = ft_memmove(dst, src, N);
	i = 0;
	while (i < N)
		printf("%c", ((unsigned char *)dst)[i++]);
	printf("\n");

	printf("vs MEMCPY & MEMMOVE\n");

	// comparing with memcpy
	ft_strlcpy(str, "hello World!", 12);
	src = str;
	dst = src + spc;
	dst = memcpy(dst, src, N);
	i = 0;
	while (i < N)
		printf("%c", ((unsigned char *)dst)[i++]);
	printf("\n");

	// comparing with memmove
	ft_strlcpy(str, "hello World!", 12);
	src = str;
	dst = src + spc;
	dst = memmove(dst, src, N);
	i = 0;
	while (i < N)
		printf("%c", ((unsigned char *)dst)[i++]);
	printf("\n");

	// testing ft_bzero
	ft_strlcpy(str, "hello World!", 12);
	printf("FT_BZERO\n");
	N = 7;
	ft_bzero(str, N);
	i = 0;
	while (str[i++] == 0)
		printf("_");
	char	*pstr;
	pstr = str + i - 1;
	printf("%s\n", pstr);
	ft_strlcpy(str, "hello World!", 12);
	ft_bzero(str, N);
	i = 0;
	while (str[i++] == 0)
		printf("_");
	pstr = str + i - 1;
	printf("%s\n", pstr);

	// testing ft_strlcat
	printf("FT_STRLCAT\n");
	N = 19;
	ft_strlcpy(str, "hello World!", 12);
	src = "How is it going?";
	printf("%zu\n", ft_strlcat(str, src, N));
	printf("%s\n", str);
	ft_strlcpy(str, "hello World!", 12);
	printf("%zu\n", strlcat(str, src, N));
	printf("%s\n", str);
	free(str);

	// testing ft_strncmp
	printf("FT_STRNCMP\n");
	char *s1, *s2;
	// N = 4;
	N = 5;
	// s1 = "Hello";
	s1 = "Belly";
	// s1 = "";
	// s2 = "Hell";
	s2 = "Bellicose";
	printf("%d\n", ft_strncmp(s1, s2, N));
	printf("%d\n", strncmp(s1, s2, N));

	printf("FT_MEMCMP\n");
	printf("%d\n", ft_memcmp(s1, s2, N));
	printf("%d\n", memcmp(s1, s2, N));

	// testing ft_strnstr
	printf("FT_STRNSTR\n");
	str = malloc(100);
	char *needle, *haystack;
	needle = "friend";
	haystack = "A friend in need is a friend indeed";
	N = 6;
	if (ft_strnstr(haystack, needle, N))
	{	
		ft_strlcpy(str, ft_strnstr(haystack, needle, N), ft_strlen(haystack) + 1);
		printf("%s\n", str);
		free(str);
	}
	else
		printf("(null)\n");

	str = malloc(100);
	printf("vs STRNSTR\n");
	if (strnstr(haystack, needle, N))
	{
		ft_strlcpy(str, strnstr(haystack, needle, N), ft_strlen(haystack) + 1);
		printf("%s\n", str);
		free(str);
	}
	else
		printf("(null)\n");

	// testing atoi.c
	char *numstr;
	
	numstr = "-2147483648";
	// numstr = "2147483647";
	// numstr = "0";
	// numstr = "+7";
	// numstr = "-2";
	// numstr = "42";
	// numstr = "4";
	// numstr = "70a8";
	// numstr = "   12";
	// numstr = "   -+12";
	printf("FT_ATOI\n");
	printf("%d\n", ft_atoi(numstr));
	printf("%d\n", atoi(numstr));
	return (0);
}
