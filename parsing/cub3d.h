/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:29:24 by maeskhai          #+#    #+#             */
/*   Updated: 2025/09/25 02:07:18 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif


# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# include "./get_next_line/get_next_line.h"

typedef struct	s_data
{
	char	**fd_lines;
	char	*no;
	char	*so;
	char	*we;
	char	*ea;
	int		nb_vars;
}	t_data;


//------------//parsing :

void    ft_parsing(char *str, t_data *dt);
void	ft_check_file_name(char *s);
void	ft_print_error(char *s, char **map, char *line);
void	ft_free_map(char **map);
void	ft_read_fd(char *fd_in, t_data *dt);
char	**ft_split(char *s, char c);
void	ft_init_vars(t_data *dt);
char	*ft_put_value(char *s);
int		ft_strncmp(char *s1, char *s2, int n);

#endif