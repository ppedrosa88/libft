/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:21:59 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/13 19:41:22 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp_len(const char *s, size_t len)
{
	if (ft_strlen(s) >= len)
		return (len);
	else
		return (ft_strlen(s));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*cad;
	unsigned int	i;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	cad = malloc(comp_len(s, len) + 1);
	if (!cad)
		return (0);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		cad[i] = ((char *)s)[start];
		i++;
		start++;
	}
	cad[i] = '\0';
	return (cad);
}
