/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:29:24 by maeskhai          #+#    #+#             */
/*   Updated: 2025/09/24 16:38:53 by maeskhai         ###   ########.fr       */
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

typedef struct	s_list
{
	char	**fd_lines;
}	t_list;


//------------//parsing :

void    ft_parsing(char *str, t_list *list);
void	ft_check_file_name(char *s);
void	ft_print_error(char *s, char **map, char *line);
// int		ft_strlen(char *s);
void	ft_free_map(char **map);
void	ft_read_fd(char *fd_in, t_list *list);
// char    *get_next_line(int fd);
// char	*ft_strjoin(char *s1, char *s2);
// void	*ft_calloc(size_t count, size_t size);
// int     ft_strchr(char *s, int c);
// void	ft_free(char **s1, char **s2);
char	**ft_split(char *s, char c);

#endif