/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:12:24 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/11 20:02:20 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	n;
	unsigned int	i;

	{
		n = ft_strlen((char *)needle);
		if (n == 0)
			return ((char *)haystack);
		if (len == 0)
			return (0);
		i = 0;
		while (haystack[i] && i <= (len - n))
		{
			if (!ft_strncmp(&haystack[i], needle, n))
				return ((char *)&haystack[i]);
			i++;
		}
		return (0);
	}
}
