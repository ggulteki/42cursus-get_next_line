/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:43:09 by ggulteki          #+#    #+#             */
/*   Updated: 2023/06/08 19:37:05 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
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
