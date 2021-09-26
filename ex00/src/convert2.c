/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:26:51 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 23:28:09 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert2.h"

int	non_first_block_conv(char *buff, int i, t_dict *dict)
{
	if (i == 0)
	{
		if (hundered_conv(buff[0], dict) == INVALID)
			return (INVALID);
	}
	else
	{
		if (print_match_key(&buff[i], dict) == INVALID)
			return (INVALID);
	}
	return (SUCCESS);
}
