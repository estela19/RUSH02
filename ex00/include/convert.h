/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:16:58 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 23:28:28 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include "dic.h"
# include "module.h"
# include "convert2.h"

int	convert(char *str, t_dict *dict);
int	recursive_conv(char *num, int len, t_dict *dict);
int	hundered_conv(char n, t_dict *dict);
int	block_conv(char *num, int offset, t_dict *dict);
int	base_conv(int pow, t_dict *dict);

#endif