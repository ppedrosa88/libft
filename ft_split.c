/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppedrosa <ppedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:11:44 by ppedrosa          #+#    #+#             */
/*   Updated: 2022/05/15 11:27:06 by ppedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	many_words(char const *s, char c)

{
	int	i;
	int	j;
	int	word_nbr;

	j = 0;
	i = 0;
	word_nbr = 0;
	while (s[i])
	{
		if ((s[i] != c) && (word_nbr == 0))
		{
			word_nbr = 1;
			j++;
		}
		else if (s[i] == c)
			word_nbr = 0;
		i++;
	}
	return (j);
}

int	word_length(char *s, int *i, char c)
{
	int	x;
	int	y;

	x = 0;
	while ((s[*i] == c) && s[*i])
	{
		*i += 1;
	}
	y = *i;
	while (s[y] && (s[y] != c))
	{
		y++;
		x++;
	}
	return (x);
}

int	wrt_words(char *s, char **p, int *i, char c)
{
	int		word_size;
	int		j;
	int		k;
	char	*word;

	word_size = word_length(s, i, c);
	k = 0;
	while (word_size != 0)
	{
		word = (char *)ft_calloc(sizeof(char), (word_size + 1));
		if (!word)
			return (1);
		j = 0;
		while (j < word_size)
		{
			word[j++] = s[*i];
			*i += 1;
		}
		word[j] = '\0';
		p[k] = word;
		k++;
		word_size = word_length(s, i, c);
	}
	p[k] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**split_word;
	int		i;
	int		no_word;

	if (!s)
		return (NULL);
	count = many_words(s, c);
	split_word = (char **)ft_calloc(sizeof(char *), count + 1);
	if (!split_word)
		return (NULL);
	i = 0;
	no_word = wrt_words((char *)s, split_word, &i, c);
	if (no_word)
	{
		i = 0;
		while (split_word[i])
		{
			free(split_word[i]);
			i++;
		}
		free(split_word);
		return (NULL);
	}
	return (split_word);
}
