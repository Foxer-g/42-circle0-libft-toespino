/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:02:03 by toespino          #+#    #+#             */
/*   Updated: 2025/10/28 18:46:38 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	ft_len_next_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

static int	ft_count_wrd(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			s += ft_len_next_word(s, c);
			i++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**out;

	i = 0;
	if (!s)
		return (NULL);
	out = ft_calloc(ft_count_wrd(s, c) + 1, sizeof(char *));
	if (!out)
		return (NULL);
	out[ft_count_wrd(s, c)] = 0;
	while (*s)
	{
		if (*s != c)
		{
			out[i] = ft_substr(s, 0, ft_len_next_word(s, c));
			if (out[i++] == NULL)
				return (ft_free(out));
			s += ft_len_next_word(s, c);
		}
		else
			s++;
	}
	return (out);
}
