/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 22:55:30 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 23:23:59 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_H
# define MODULE_H

# include "utility.h"
# include "dic.h"

void	buff_clean(char	*buff);
int		print_match_key(char *buff, t_dict *dict);
int		is_valid_input(char *str);
void	parse(int argc, char **argv, t_dict *dict);

#endif