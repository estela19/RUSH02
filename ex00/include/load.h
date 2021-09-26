/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:48:16 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 23:21:10 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOAD_H
# define LOAD_H

# include<unistd.h>
# include<fcntl.h>

# include "dic.h"

# define SIZE 1000

int	load(const char *path, t_dict *dict);
int	load_file(const char *path, char *buff);
int	init_dict(char *buff, t_dict *dict);
int	parse_key(char *buff, t_dict *dict, int *idx);
int	parse_value(char *buff, t_dict *dict, int *idx);

#endif