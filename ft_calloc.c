/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:46:57 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/04/29 12:46:57 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
   void *ptr;

   ptr = (void *)malloc(nmemb * size);
   if (!ptr)
        return (NULL);
    ft_bzero(ptr, (nmemb * size));
    return (ptr);
}
