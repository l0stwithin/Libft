#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
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

	// testing ft_strlen
	printf("FT_STRLEN\n");
	printf("%zu\n", ft_strlen(""));					// testing null
	printf("%zu\n", strlen(""));
	printf("%zu\n", ft_strlen("Hell0!\n"));			// testing all kinds of values
	printf("%zu\n", strlen("Hell0!\n"));
	printf("%zu\n", ft_strlen("He\0ll0!\n"));		// testing with null inside string
	printf("%zu\n", strlen("He\0ll0!\n"));
	return (0);
}