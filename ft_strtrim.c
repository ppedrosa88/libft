/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:22:36 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/04/30 09:22:36 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    char    *str;

    str = 0;
    if (s1 != 0 && set != 0)
    {
        i = 0;
        j = ft_strlen((char *)s1);
        while(s1[i] && ft_strchr(set, s1[i]))
            i++;
        while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j < i)
            j--;
        if (str)
            ft_strlcpy(str, &s1[i], j - i + 1);
    }
    return (str);
}

int main()
{
    printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
    return (0);
}