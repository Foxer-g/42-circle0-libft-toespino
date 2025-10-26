/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:58:25 by toespino          #+#    #+#             */
/*   Updated: 2025/10/26 13:28:06 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*out;
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s2);
	out = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) - 1);
	if (!out)
		return (NULL);
	while (s1[j])
	{
		out[i] = s1[j];
		i++;
		j++;
	}
	ft_strlcpy(&out[i], s2, len + 1);
	return (out);
}
