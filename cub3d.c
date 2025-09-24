/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 10:25:25 by maeskhai          #+#    #+#             */
/*   Updated: 2025/09/23 13:10:10 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parsing/cub3d.h"

int	main(int ac, char **av)
{
	t_list	list;

	if (ac != 2)
		ft_print_error("Error\nInvalid args!\n", NULL, NULL);
	ft_parsing(av[1], &list);
}
