/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 01:07:24 by maeskhai          #+#    #+#             */
/*   Updated: 2025/09/25 13:23:03 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	init_variables(t_data *dt)
{
	dt->nb_no = 0;
	dt->nb_ea = 0;
	dt->nb_so = 0;
	dt->nb_we = 0;
	dt->nb_f = 0;
	dt->nb_c = 0;
}

void	ft_init_vars(t_data *dt)
{
	int i;

	i = 0;
	while (dt->fd_lines[i])
	{
		if (ft_strncmp(dt->fd_lines[i], "NO", 2) == 0)
		{
			if (dt->nb_no == 0)
				dt->no = ft_get_texture(dt->fd_lines[i]);
			dt->nb_no++;
		}
		if (ft_strncmp(dt->fd_lines[i], "SO", 2) == 0)
		{
			if (dt->nb_so == 0)
				dt->so = ft_get_texture(dt->fd_lines[i]);
			dt->nb_so++;
		}
		if (ft_strncmp(dt->fd_lines[i], "WE", 2) == 0)
		{
			if (dt->nb_we == 0)
				dt->we = ft_get_texture(dt->fd_lines[i]);
			dt->nb_we++;
		}
		if (ft_strncmp(dt->fd_lines[i], "EA", 2) == 0)
		{
			if (dt->nb_ea == 0)
				dt->ea = ft_get_texture(dt->fd_lines[i]);
			dt->nb_ea++;
		}
		i++;
	}
	if (dt->nb_no != 1 || dt->nb_so != 1 || dt->nb_we != 1 || dt->nb_ea != 1)
		ft_print_error("Error\nInvalid Texture Info!\n", NULL, NULL);
}

void	ft_extract_color(t_data *dt)
{
	char	**arr;
	
	arr = ft_split(dt->c_color, ',');
	int i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
}

void	ft_init_color(t_data *dt)
{
	int i;

	i = 0;
	while (dt->fd_lines[i])
	{
		if (ft_strncmp(dt->fd_lines[i], "F", 1) == 0)
		{
			if (dt->nb_f == 0)
				dt->f_color = ft_get_color(dt->fd_lines[i]);
			dt->nb_f++;
		}
		if (ft_strncmp(dt->fd_lines[i], "C", 1) == 0)
		{
			if (dt->nb_c == 0)
				dt->c_color = ft_get_color(dt->fd_lines[i]);
			dt->nb_c++;
		}
		i++;
	}
	if (dt->nb_f != 1 || dt->nb_c != 1)
		ft_print_error("Error\nInvalid args!\n", NULL, NULL);
}

// void	ft_get_color(t_data *dt)
// {
	
// }

void	ft_check_fd(t_data *dt)
{
	init_variables(dt);
	ft_init_vars(dt);
	ft_init_color(dt);
	ft_extract_color(dt);
}