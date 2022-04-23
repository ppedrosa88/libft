/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:36:10 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/04/20 20:13:40 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)(str))[i] = c;
		i++;
	}
	return (str);
}
