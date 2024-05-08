/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:18:43 by jkulka            #+#    #+#             */
/*   Updated: 2024/01/22 14:01:34 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../Libft/src/libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int		ft_find_newline(char *save);
char	*ft_read_and_save(int fd, char *save);
char	*ft_get_line(char *save);
char	*ft_save(char *save);
char	*ft_strjoin_gnl(char *left_str, char *buff);
size_t	ft_strlen_gnl(char *str);
char	*ft_strchr_gnl(char *s, int c);

#endif
