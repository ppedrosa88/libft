/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:21:59 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:52 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	size_t	j;

	str = (char *)malloc(len + 1);
	i = (size_t)start;
	j = 0;
	if (!s || !str)
		return (NULL);
	while (i < ft_strlen((char *)s) && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
