/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:14:09 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/26 23:22:35 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"
#include "utility.h"
#include "dic.h"
#include "load.h"
#include "module.h"

int	main(int argc, char **argv)
{
	t_dict	dict[1000];

	parse(argc, argv, dict);
	if (convert(argv[1], dict) == INVALID)
		print("Dict Error");
	print("\n");
	return (0);
}
