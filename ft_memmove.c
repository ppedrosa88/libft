/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:40:38 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/11 19:33:37 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_new;
	const char	*src_new;
	char		*lastd;
	const char	*lasts;

	dst_new = dst;
	src_new = src;
	lasts = src_new + (len - 1);
	lastd = dst_new + (len - 1);
	if (src == dst)
		return (0);
	if (dst_new < src_new)
		while (len--)
			*dst_new++ = *src_new++;
	else
		while (len--)
			*lastd-- = *lasts--;
	return (dst);
}
