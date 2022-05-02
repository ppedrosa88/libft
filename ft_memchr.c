/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:09:50 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/02 13:22:59 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*find;

	p = (unsigned char *)s;
	find = NULL;
	while ((s != NULL) && (n--))
	{
		if (*p != (unsigned char)c)
			p++;
		else
		{
			find = p;
			break ;
		}
	}
	return (find);
}
