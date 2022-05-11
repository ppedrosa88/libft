/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:28:01 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/11 19:27:45 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*src_new;
	unsigned char		*dst_new;
	size_t				i;

	src_new = (unsigned char *)src;
	dst_new = (unsigned char *)dst;
	i = 0;
	if (!(src_new || dst_new))
		return (NULL);
	while (i < n)
	{
		dst_new[i] = src_new[i];
		i++;
	}
	return (dst_new);
}
