/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:31:33 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 17:52:21 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIC_H
# define DIC_H

typedef struct s_dict{
	int		size;
	char	key[1000];
	char	value[1000];
}t_dict;

int	get(char *key, char *value, t_dict *dict);

#endif