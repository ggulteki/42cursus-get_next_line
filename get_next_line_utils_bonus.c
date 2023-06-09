/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:43:15 by ggulteki          #+#    #+#             */
/*   Updated: 2023/06/08 19:38:29 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (*(s + i) != '\0')
		i++;
	return (i);
}

int	ft_nl_finder(char *s)
{
	int	i;

	i = -1;
	if (!s)
		return (0);
	while (*(s + ++i))
	{
		if (*(s + i) == '\n')
			return (1);
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *buf)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		*(s1) = '\0';
	}
	if (!s1 && !buf)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(buf)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = -1;
	while (*(s1 + ++i) != '\0')
		*(str + i) = *(s1 + i);
	while (*(buf + ++j) != '\0')
		*(str + i++) = *(buf + j);
	*(str + (ft_strlen(s1) + ft_strlen(buf))) = '\0';
	free(s1);
	return (str);
}

char	*ft_take_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	if (!str)
		return (NULL);
	if (!*(str + i))
		return (NULL);
	while (*(str + i) && *(str + i) != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = -1;
	while (*(str + ++i) && *(str + i) != '\n')
		*(line + i) = *(str + i);
	if (*(str + i) == '\n')
	{
		*(line + i) = *(str + i);
		i++;
	}
	*(line + i) = '\0';
	return (line);
}

char	*ft_str_updater(char *str)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (*(str + i) && *(str + i) != '\n')
		i++;
	if (!*(str + i))
	{
		free(str);
		return (NULL);
	}
	line = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!line)
		return (NULL);
	i++;
	j = 0;
	while (*(str + i))
		*(line + j++) = *(str + i++);
	*(line + j) = '\0';
	free(str);
	return (line);
}
