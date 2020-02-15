/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 00:47:40 by jquincy           #+#    #+#             */
/*   Updated: 2019/10/05 01:14:28 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include "sys/types.h"
# include "sys/uio.h"

# define BUFF_SIZE 1

int		ft_newline(char **s, char **line, int fd, int res);
int		get_next_line(const int fd, char **line);
#endif
