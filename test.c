/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:52:28 by                   #+#    #+#             */
/*   Updated: 2020/01/20 15:11:16 by vparekh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_write(int fd, const void *content, size_t length);
int		ft_strlen(const char* string);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *s1, char *s2);

int main(int argc, const char *argv[])
{
/************************checking ft_write and ft_strlen***********************/
	printf("\n\nChecking strncmp\n");
	ft_write(1, "Hello world\n", 12);
	int x  = ft_strlen("hello world");
	printf("x: %d\n", x);

/************************checking strcmp***************************************/
	printf("\n\nChecking strcmp\n");
	char *s1= "aaaa";
	char *s2= "aaaa";
	x = 0;
	int z = ft_strcmp(s1, s2);
	int y = strcmp(s1, s2);
	printf("z: %d\n", z);
	printf("y: %d\n", y);

/************************checking strcpy***************************************/
	printf("\n\nChecking strcpy\n");
	char *cp1 = "Happy";
	char *cp2 = malloc(5);
	char *cp3 = malloc(6);
	strcpy(cp2, cp1);
	cp3 = ft_strcpy(cp3, cp1);
	printf("cp2: %s\n", cp2);
	printf("cp3: %s\n", cp3);
	return 0;
}
