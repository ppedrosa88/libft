/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:12:24 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/02 13:09:22 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	int		i;
	int		j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (n[i] == '\0')
		return (h);
	while (h[i] != '\0' && len--)
	{
		while (h[i + j] != '\0' && h[i + j] == n[j])
		{
			j++;
		}
		if (n[j] == '\0')
			return (&h[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
