/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:16:20 by maeskhai          #+#    #+#             */
/*   Updated: 2025/09/25 12:17:19 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_get_texture(char *s)
{
	int		i;
	char	*str;
	int		len;
	int		j;

	i = 2;
	len = ft_strlen(s);
	j = 0;
	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
		len--;
	}
	str = malloc(len + 1 - 2);
	while (s[i])
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return(str);
}

char	*ft_get_color(char *s)
{
	int		i;
	char	*str;
	int		len;
	int		j;

	i = 1;
	len = ft_strlen(s);
	j = 0;
	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
		len--;
	}
	str = malloc(len + 1 - 1);
	while (s[i])
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return(str);
}
