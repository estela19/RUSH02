/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:35:43 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 22:46:25 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	print(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			continue ;
		}
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s1 < *s2)
			return (*s1 - *s2);
	}
	if (*s1 == '\0')
		return (*s2);
	else if (*s2 == '\0')
		return (*s1);
	else
		return (0);
}

void	ft_strcpy(char *dest, char *src)
{
	char	*isrc;
	char	*idest;

	isrc = src;
	idest = dest;
	while (*isrc != '\0')
	{
		*idest = *isrc;
		isrc++;
		idest++;
	}
	*idest = '\0';
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int	is_num(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
