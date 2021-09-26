/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:48:02 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 23:20:59 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "load.h"
#include "dic.h"
#include "utility.h"

int	load_file(const char *path, char *buff)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		return (INVALID);
	}
	else
	{
		read(fd, buff, SIZE);
		close(fd);
	}
	return (SUCCESS);
}

int	parse_key(char *buff, t_dict *dict, int *idx)
{
	int	j;

	j = 0;
	while (is_num(buff[*idx]))
	{
		dict->key[j] = buff[*idx];
		*idx += 1;
		j++;
	}
	dict->key[j] = '\0';
	while (buff[*idx] == ' ')
		(*idx)++;
	if (buff[*idx] != ':')
		return (INVALID);
	else
	{
		*idx += 1;
		return (SUCCESS);
	}
}

int	parse_value(char *buff, t_dict *dict, int *idx)
{
	int	j;

	j = 0;
	while (buff[*idx] == ' ')
		(*idx)++;
	while (buff[*idx] != '\n')
	{
		if (buff[*idx] < 32 || buff[*idx] > 126)
			return (INVALID);
		dict->value[j] = buff[*idx];
		(*idx)++;
		j++;
	}
	*idx += 1;
	dict->value[j] = '\0';
	return (SUCCESS);
}

int	init_dict(char *buff, t_dict *dict)
{
	int	i;
	int	idx;

	i = 0;
	idx = 0;
	while (buff[idx] != '\0')
	{
		if (parse_key(buff, &dict[i], &idx) == INVALID \
		|| parse_value(buff, &dict[i], &idx) == INVALID)
			return (INVALID);
		i++;
	}
	dict[0].size = i;
	return (SUCCESS);
}

int	load(const char *path, t_dict *dict)
{
	char	buff[SIZE];
	int		err;

	err = load_file(path, buff);
	if (err == INVALID)
		return (INVALID);
	err = init_dict(buff, dict);
	if (err == INVALID)
		return (INVALID);
	return (SUCCESS);
}
