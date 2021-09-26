/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:19:22 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 23:25:28 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "module.h"
#include "load.h"

void	buff_clean(char *buff)
{
	buff[0] = '0';
	buff[1] = '0';
	buff[2] = '0';
}

int	print_match_key(char *buff, t_dict *dict)
{
	char	value[100000];

	if (get(buff, &value[0], dict) == INVALID)
		return (INVALID);
	print(value);
	return (SUCCESS);
}

int	is_valid_input(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_num(str[i]) == 0)
			return (INVALID);
		i++;
	}
	return (SUCCESS);
}

void	parse(int argc, char **argv, t_dict *dict)
{
	int		error;

	if (argc == 1)
	{
		print ("error\n");
		return ;
	}
	else if (argc == 2)
		error = load("numbers.dict", dict);
	else if (argc == 3)
		error = load(argv[2], dict);
	if (error == INVALID)
	{
		print ("Dict Error\n");
		return ;
	}
	if (is_valid_input(argv[1]) == INVALID)
	{
		print ("error\n");
		return ;
	}
}
