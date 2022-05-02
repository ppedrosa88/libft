/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:56:37 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/02 12:17:38 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		index;

	index = 0;
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	str = (char *)malloc(i + j + 1);
	if (!s1 || !s2)
		return (NULL);
	if (!str)
		return (NULL);
	while (i--)
	{
		str[index] = s1[index];
		index++;
	}
	i = 0;
	while (j--)
	{
		str[index++] = s2[i++];
	}
	str[index] = '\0';
	return (str);
}
