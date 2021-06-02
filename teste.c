/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:06:01 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/02 00:02:27 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_atoi_like_test(char *str1)
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
	printf("y = %d \n", y);
	printf("z = %d \n", z);
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
	t = ft_strlcat(dest, str, 60);
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

	ft_putnbr_fd(-2147483648, 1);*/
	char *ex = "string";
	ft_putendl_fd(ex, 1);
	return(0);
}
