/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:17:01 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 23:28:12 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"
#include "utility.h"
#include "dic.h"

int	convert(char *str, t_dict *dict)
{
	int	len;

	if (str[0] == '0')
		return (print_match_key(str, dict));
	else
	{
		len = ft_strlen(str);
		return (recursive_conv(str, len, dict));
	}
}

int	recursive_conv(char *num, int len, t_dict *dict)
{
	int	offset;
	int	code;

	offset = 3;
	if (len <= 0)
		return (SUCCESS);
	else
	{
		if (len % 3 != 0)
			offset = len % 3;
		code = block_conv(num, offset, dict);
		if (code == INVALID)
			return (code);
		code = base_conv(len - offset, dict);
		if (code == INVALID)
			return (code);
		if (len - offset != 0)
			print(" ");
		code = recursive_conv(&num[offset], len - offset, dict);
		if (code == INVALID)
			return (code);
	}
	return (code);
}

int	hundered_conv(char n, t_dict *dict)
{
	char	buff[3];

	buff[0] = '0';
	buff[1] = '0';
	buff[2] = n ;
	if (print_match_key(&buff[2], dict) == INVALID)
		return (INVALID);
	print(" ");
	buff[2] = '0';
	buff[0] = '1';
	if (print_match_key(&buff[0], dict) == INVALID)
		return (INVALID);
	return (SUCCESS);
}

int	block_conv(char *num, int offset, t_dict *dict)
{
	char	buff[3];
	int		i;

	i = 0;
	while (i < 3 && num[i] != '0')
	{
		buff_clean(buff);
		if (i - (3 - offset) < 0)
		{
			i++;
			continue ;
		}
		buff[i] = num[i - (3 - offset)];
		if (buff[1] == '1')
		{
			buff[2] = num[2 - (3 - offset)];
			return (print_match_key(&buff[1], dict));
		}
		if (non_first_block_conv(buff, i, dict) == INVALID)
			return (INVALID);
		i++;
		if (num[i] != '\0')
			print(" ");
	}
	return (SUCCESS);
}

int	base_conv(int pow, t_dict *dict)
{
	char	buff[100];
	int		i;

	if (pow == 0)
		return (SUCCESS);
	i = 0;
	while (i < 100)
		buff[i++] = '0';
	buff[0] = '1';
	buff[pow + 1] = '\0';
	return (print_match_key(buff, dict));
}
