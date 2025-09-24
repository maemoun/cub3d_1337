/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:07:16 by maeskhai          #+#    #+#             */
/*   Updated: 2025/09/23 13:29:43 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void    ft_parsing(char *fd_in, t_list *list)
{
	ft_check_file_name(fd_in);
	ft_read_fd(fd_in, list);
    int i = 0;
    while (1)
    {
        printf("%s\n", list->fd_lines[i]);
    }
	// ft_check_map_errors(&list);
}