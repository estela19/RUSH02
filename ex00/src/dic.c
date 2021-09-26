/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:31:36 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 22:47:18 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dic.h"
#include "utility.h"

int	get(char *key, char *value, t_dict *dict)
{
	int	i;
	int	len;

	if (dict == 0)
		return (INVALID);
	i = 0;
	len = dict[0].size;
	while (i < len)
	{
		if (ft_strcmp(key, dict[i].key) == 0)
		{
			ft_strcpy(value, dict[i].value);
			return (SUCCESS);
		}
		i++;
	}
	return (INVALID);
}
