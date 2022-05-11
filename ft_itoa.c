/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:07:07 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/11 20:08:39 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_char(int n)
{
	if (n == -2147483648)
		return (11);
	else if (n < 0)
		return (num_char(n * (-1)) + 1);
	else if (n < 10)
		return (1);
	else
		return (num_char(n / 10) + 1);
}

void	convert_to_char(char *sol, int size, long int num)
{
	sol[size] = '\0';
	if (num < 0)
	{
		sol[0] = '-';
		num *= -1;
		while (size > 1)
		{
			sol[size - 1] = num % 10 + '0';
			num = num / 10;
			size--;
		}
	}
	else
	{
		while (size > 0)
		{
			sol[size - 1] = num % 10 + '0';
			num = num / 10;
			size--;
		}
	}
}

char	*ft_itoa(int n)
{
	int		size;
	char	*strnbr;
	int		num;

	size = num_char(n);
	strnbr = (char *)ft_calloc((size + 1), sizeof(char));
	if (!strnbr)
		return (NULL);
	num = (long int)n;
	convert_to_char(strnbr, size, num);
	return (strnbr);
}
