/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:09:50 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/11 19:36:34 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*find;

	find = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (find[i] == (unsigned char) c)
			return ((void *) &find[i]);
		i++;
	}
	return (NULL);
}
