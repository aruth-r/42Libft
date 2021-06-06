/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:06:01 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/06 19:35:25 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*void	ft_atoi_like_test(char *str1)
{
	int buff;
	int ft_buff;

	buff = atoi(str1);
	ft_buff = ft_atoi(str1);
	if (buff != ft_buff)
		printf("> KO, invalid int value returned. expected: %d got: %d\n", buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str1, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str1);
	if (ft_buff != expected_result)
		printf("> KO, invalid int value returned expected: %d got: %d\n", expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

static char		upper(unsigned int i, char c)
{
	static int indexArray[33] = {0};

	if (i > 32 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	return(ft_toupper(c));
}

static size_t	ft_wc(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s == c)
		s++;
	if (*s != c && *s != 0)
	{
		i++;
		while (*s != 0)
		{
			if (*s == c && *(s + 1) != c && *(s + 1) != 0)
				i++;
			s++;
		}
	}
	return (i);
}

static size_t	ft_wlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s != c && *s != 0)
	{
		i++;
		s++;
	}
	return (i);
}

static char*	ft_nextw(char *s, char c)
{
	char *word;

	word = (char *)malloc(ft_wlen(s, c)*sizeof(char) + 1);
	if (word == 0)
		return (0);
	while (*s == c && *(s + 1) == c)
		s++;
	word = ft_substr(ft_strchr(s, c), 1, ft_wlen(s, c));
	word[ft_wlen(s, c)] = '\0';
	return (word);
}*/

int main ()
{
	char str[60];
	char dest[60];
	//char *s;
	//char *d;
	//size_t len;

	//s = &(*str);
	strcpy(str,"This is string.h library function");
	strcpy(dest,"This is string dest");
	/*d = ft_strdup(s);
	puts(d);
	free(d);

	ft_memset(str, 'c' ,7);
	puts(str);
	ft_memset(dest, 0 ,1);
	puts(dest);
	puts(dest + 1);
	ft_memcpy(dest, str, 3);
	puts(dest);

	ft_bzero(str, 7);
	puts(str);
	ft_memccpy(dest, str, 'r', 15);
	puts(dest);
	printf("Valor de s = %p \n", s);
	printf("Valor de apontado por s = %c \n", *s);
	printf("Valor de d = %p \n", d);
	printf("Valor de apontado por d = %c \n", *d);

	ft_memmove(d, s, 33);
	puts(s);
	puts(d);
	ft_memmove(s, d, 33);
	puts(s);
	puts(d);

	len = ft_strlen(s);
	printf("Tamanho de s = %ld \n", len);

	len = ft_strlcpy(d, s, 60);
	puts(s);
	puts(d);
	printf("Tamanho de s = %ld \n", len);

	int c;

	c = 31;
	while(c <= 127)
	{
		printf("O valor de c é %d, ", c);
		if(ft_isascii(c))
			printf("c é ascii ");
		if(ft_isprint(c))
		{
			printf("e representa o caracter %c ", c);
			if(ft_isalpha(c))
				printf(", c é letra ");
			if(ft_isdigit(c))
				printf(", c é número ");
			if(ft_isalnum(c))
				printf(", c é alfanumérico");
		}
		c++;
		printf("\n");
	}
	if(ft_isascii(c) == 0)
			printf("c não é ascii \n");

	int c;
	int b;
	int e;
	c = 65;
	b = 0;
	e = 0;
	while(c <= 122)
	{
		if(ft_isalnum(c))
		{
			b = ft_tolower(c);
			e = ft_toupper(c);
			printf("O caracter é %c, lowercase é %c, uppercase é %c \n", c, b, e);
		}
		c++;
	}

	char *a = memchr(s, 's', 35);
	printf("a aponta para: %c \n", *a);

	puts(str);
	puts(dest);

	int x = ft_memcmp(str, dest, 7);
	int y = ft_memcmp(str, dest, 10);
	int z = ft_memcmp(dest, str, 20);
	int w = ft_memcmp(str, str, 70);
	printf("ft_memcmp: \n x = %d \n", x);
	printf("y = %d \n", z);
	printf("w = %d \n", w);
	x = ft_memcmp(str, dest, 7);
	y = ft_memcmp(str, dest, 10);
	z = ft_memcmp(dest, str, 20);
	w = ft_memcmp(str, str, 70);
	printf("memcmp: \n x = %d \n", x);
	printf("y = %d \n", y);
	printf("z = %d \n", z);
	printf("w = %d \n", w);
	size_t  t = strlen(str);
	printf("t = %ld \n", t);
	t = strlen(dest);
	printf("t = %ld \n", t);
	t = ft_strlcat(dest, str, 10);
	puts(dest);
	printf("t = %ld \n", t);
	puts(str);
	char *a = ft_strchr(s, 's');
	printf("a aponta para: %c \n", *a);
	printf("Endereço de s: %p \nEndereço de a: %p \n", s, a);
		a = ft_strchr(s, '\0');
	printf("a aponta para: %c \n", *a);
	printf("Endereço de s: %p \nEndereço de a: %p \n", s, a);
	puts(str);
	char *a = ft_strrchr(s, 's');
	printf("a aponta para: %c \n", *a);
	printf("Endereço de s: %p \nEndereço de a: %p \n", s, a);
	a = ft_strrchr(s, '\0');
	printf("a aponta para: %c \n", *a);
	printf("Endereço de s: %p \nEndereço de a: %p \n", s, a);

	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
	const char *null = "\0";
	char *ptr;
	char *ptr2;

    ptr2 = ft_strnstr(largestring, null, 10);
	puts(ptr2);
    ptr = ft_strnstr(largestring, smallstring, 10);
	puts(ptr);
	printf("Endereço de largestring: %p \nEndereço de ptr: %p \n", largestring, ptr);
	ptr = ft_strnstr(largestring, smallstring, 4);
	if (ptr == 0)
		printf("OK");

	int x = ft_strncmp(str, dest, 7);
	int y = ft_strncmp(str, dest, 20);
	int z = ft_strncmp(dest, str, 20);
	int w = ft_strncmp(str, str, 70);
	printf("ft_strcmp: \n x = %d \n", x);
	printf("y = %d \n", y);
	printf("z = %d \n", z);
	printf("w = %d \n", w);
	x = strncmp(str, dest, 7);
	y = strncmp(str, dest, 20);
	z = strncmp(dest, str, 20);
	w = strncmp(str, str, 70);
	printf("strcmp: \n x = %d \n", x);
	printf("y = %d \n", y);
	printf("z = %d \n", z);
	printf("w = %d \n", w);

	// quando o comportamento e igual ao de atoi

	char *str1;
	str1 = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str1);
	str1 = " \n \t\f\r \v -1234b67asd";
	ft_atoi_like_test(str1);
	// quando o comportamento e diferente ao de atoi
	str1 = " \n \t \r \v --+-+-+-2147483648asd";
	ft_atoi_unlike_test(str1, -2147483648);
	str1 = " \n \t\f\r \v -++-+-++1234b67asd";
	ft_atoi_unlike_test(str1, -1234);

	char *ptr = (char *)ft_calloc(5, 5);
	int i = 0;
	while( i < 30)
	{
		printf("ptr[%d] = %d \n", i, *ptr);
		ptr++;
		i++;
	}

	char *subs = ft_substr(dest, 9, 6);
	puts(subs);
	subs = ft_substr(dest, 0, 20);
	puts(subs);

	char *join = ft_strjoin(dest, str);
	puts(join);
	puts(dest);
	puts(str);

	char *set1 = "abcd";
	char *trim1 = ft_strtrim(str, set1);
	char *set2 = "abTcd";
	char *trim2 = ft_strtrim(str, set2);
	char *set3 = "abncd";
	char *trim3 = ft_strtrim(str, set3);
	char *set4 = "abTcnd";
	char *trim4 = ft_strtrim(str, set4);
	puts(trim1);
	puts(trim2);
	puts(trim3);
	puts(trim4);

	char *split = "array a ser dividida";
	char **dividir = ft_split(split, 'a');

	int i;
	i=0;
	while (dividir[i] != 0)
	{
		puts(dividir[i]);
		i++;
	}
	memset(dest, 'r', 6);
	size_t len = ft_strlcpy(dest, "lorem ipsum", 3);
	puts(dest);
	printf("Tamanho de s = %ld \n", len);

	ft_putchar_fd('s', 1);

	char *ex = "string";
	ft_putstr_fd(ex, 1);

	ft_putnbr_fd(-2147483648, 1);
	char *ex = "string";
	ft_putendl_fd(ex, 1);
	printf("tamanho do número: %ld \n", ft_nbrlen(-2564));
	char *itoa = ft_itoa(-2564);
	puts(itoa);

	puts(ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", "\t \n"));
	puts(ft_strtrim("lorem ipsum dolor sit amet \n \t ", "\t \n"));
	puts(ft_strtrim(" \n \t lorem ipsum dolor sit amet", "\t \n"));
	puts(ft_strtrim("  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ", "\t \n"));
	puts(ft_strtrim("          ", "\t \n"));

	char *mapi = ft_strmapi(str, &upper);
	puts(mapi);

	size_t wc = ft_wc("   Let's  split  this    string ", ' ');
	printf("wc = %ld \n", wc);
	size_t wlen = ft_wlen("   Let's  ", ' ');
	printf("wlen = %ld \n", wlen);
	char *string = "   Let's  split  this    string ";
	char *word = ft_nextw(string, ' ');
	puts(word);
	puts(string);

	size_t wc = ft_wc("    ", ' ');
	printf("wc = %ld \n", wc);
	char **split = ft_split("   ", ' ');
	int i = 0;
	while (split[i] != 0)
	{
		puts(split[i]);
		i++;
	}*/
	memset(dest, 'A', 60);
	int *r = (int *)ft_memccpy(dest, "42", '2', 1);
	puts(dest);
	printf("memcpy = %d \n", *r);
	return(0);
}
