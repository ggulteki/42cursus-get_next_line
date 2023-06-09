/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:42:36 by ggulteki          #+#    #+#             */
/*   Updated: 2023/06/08 20:45:09 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_reader(int fd, char *str)
{
	char	*buf;
	int		count;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	count = 1;
	while (!ft_nl_finder(str) && count != 0)
	{
		count = read(fd, buf, BUFFER_SIZE);
		if (count == -1)
		{
			free (str);
			free (buf);
			return (NULL);
		}
		*(buf + count) = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str[fd] = ft_reader(fd, str[fd]);
	if (!str[fd])
		return (NULL);
	line = ft_take_line(str[fd]);
	str[fd] = ft_str_updater(str[fd]);
	return (line);
}
