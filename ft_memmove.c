/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:40:38 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/13 18:58:34 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_new;
	unsigned char	*src_new;
	size_t			i;

	dst_new = dst;
	src_new = (unsigned char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			dst_new[i] = src_new[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len > 0)
		{
			dst_new[len - 1] = src_new[len - 1];
			len--;
		}
	}
	return (dst_new);
}
