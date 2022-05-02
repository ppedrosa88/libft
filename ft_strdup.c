/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:57:46 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/02 13:17:41 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	char	*p;
	int		i;

	i = 0;
	p = (char *)s;
	d = (char *)malloc(ft_strlen(p) + 1);
	if (d == NULL)
		return (NULL);
	while (p != NULL)
	{
		d[i] = p[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
