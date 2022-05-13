/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:35:55 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/13 17:36:19 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num < 10)
		ft_putchar_fd((char)(num + '0'), fd);
	else
	{
		ft_putnbr_fd((int)(num / 10), fd);
		ft_putchar_fd((char)(num % 10 + '0'), fd);
	}
}
