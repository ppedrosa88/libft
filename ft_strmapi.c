/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:25:07 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/11 20:44:48 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sol;
	unsigned int	i;

	if (!s)
		return (NULL);
	sol = (char *)ft_calloc(sizeof(*s), ft_strlen(s) + 1);
	if (!sol)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sol[i] = f(i, (char)s[i]);
		i++;
	}
	return (sol);
}
