#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <ctype.h>

int	main()
{
	// replace with numeral corresponding to function user input
	// testing ft_substr
	char	*str;

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
	int i = 0, j;
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
	// c = 'g';
	// c = 'B';
	// c = '9';
	// c = ' ';
	c = '#';
	// c = '\n';
	// c = 128;
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

	// testing ft_memset.c //memset does not use 0
	printf("FT_MEMSET\n");
	str = (char *)malloc(13);
	ft_strlcpy(str, "hello World!", 12);
	printf("%s\n", (char *)ft_memset(str, '\n', 2));
	ft_strlcpy(str, "hello World!", 12);
	printf("%s\n", (char *)memset(str, '\n', 2));
	ft_strlcpy(str, "hello World!", 12);
	printf("%s\n", (char *)ft_memset(str, 'A', 8));
	ft_strlcpy(str, "hello World!", 12);
	printf("%s\n", (char *)memset(str, 'A', 8));
	ft_strlcpy(str, "hello World!", 12);
	printf("%s\n", (char *)ft_memset(str, '!', 15));
	ft_strlcpy(str, "hello World!", 12);
	printf("%s\n", (char *)memset(str, '!', 15));
	free(str);
	return (0);
}
