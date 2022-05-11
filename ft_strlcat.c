/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:38:41 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/11 19:53:25 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = ft_strlen(dst);
	j = ft_strlen((char *)src);
	if (size <= i)
		return (j + size);
	count = i;
	while (*src != '\0' && count < (size - 1))
		*(dst + count++) = *src++;
	*(dst + count) = '\0';
	return (i + j);
}
