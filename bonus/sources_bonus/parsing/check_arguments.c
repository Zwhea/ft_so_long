/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:56 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 20:40:01 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	check_arguments(int argc, char **argv)
{
	if (argc < 2)
	{
		error();
		warn("the program must include a map!");
		usage();
		return (false);
	}
	else if (argc > 2)
		warn("the program will only use the first file.");
	if (!check_extension(argv[1], ".ber"))
	{
		warn("the file must have .ber type!");
		usage();
		return (false);
	}
	return (true);
}
