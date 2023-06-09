/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:36:06 by ggulteki          #+#    #+#             */
/*   Updated: 2023/06/08 19:43:51 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_reader(int fd, char *str);
int		ft_nl_finder(char *s);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *buf);
char	*ft_take_line(char *str);
char	*ft_str_updater(char *str);

#endif
