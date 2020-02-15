/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:46:35 by jquincy           #+#    #+#             */
/*   Updated: 2019/09/19 04:57:55 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	return (c == '\v' ||
			c == '\n' ||
			c == '\f' ||
			c == '\t' ||
			c == '\r' ||
			c == ' ');
}
