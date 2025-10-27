/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:38:37 by toespino          #+#    #+#             */
/*   Updated: 2025/10/27 15:13:39 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i++])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	start;
	int	end;
	int	len;

	i = 0;
	len = ft_strlen((char *)s1);
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	start = i;
	while (ft_isset(s1[len], set) && len < start)
		len--;
	end = len - start + 1;
	return (ft_substr(s1, start, end));
}
