/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:37:02 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/04/23 15:52:06 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return (s[i]);
	return (NULL);
}

int	main(void)
{
	printf("%s", ft_strchr("hola", 'l'));
	return (0);
}
