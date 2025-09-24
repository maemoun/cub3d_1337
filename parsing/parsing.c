/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:07:16 by maeskhai          #+#    #+#             */
/*   Updated: 2025/09/24 15:11:50 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void    ft_parsing(char *fd_in, t_list *list)
{
    int i = 0;
	ft_check_file_name(fd_in);
	ft_read_fd(fd_in, list);
    if (!list->fd_lines)
        ft_print_error("Error\nMap reading failed!\n", NULL, NULL);
    while (list->fd_lines[i])
    {
        printf("%s\n", list->fd_lines[i]);
        i++;
    }
	// ft_check_map_errors(&list);
}
