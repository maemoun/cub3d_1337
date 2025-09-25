/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 01:07:24 by maeskhai          #+#    #+#             */
/*   Updated: 2025/09/25 02:08:33 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_init_vars(t_data *dt)
{
	int i;

	i = 0;
	while (dt->fd_lines[i])
	{
		if (ft_strncmp(dt->fd_lines[i], "NO", 2) == 0)
		{
			dt->no = ft_put_value(dt->fd_lines[i]);
			dt->nb_vars += 1;
		}
		if (ft_strncmp(dt->fd_lines[i], "SO", 2) == 0)
		{
			dt->so = ft_put_value(dt->fd_lines[i]);
			dt->nb_vars += 1;
		}
		if (ft_strncmp(dt->fd_lines[i], "WE", 2) == 0)
		{
			dt->we = ft_put_value(dt->fd_lines[i]);
			dt->nb_vars += 1;
		}
		if (ft_strncmp(dt->fd_lines[i], "EA", 2) == 0)
		{
			dt->ea = ft_put_value(dt->fd_lines[i]);
			dt->nb_vars += 1;
		}
		i++;
	}
}