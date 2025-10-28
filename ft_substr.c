/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:14:31 by toespino          #+#    #+#             */
/*   Updated: 2025/10/27 18:52:05 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*out;
	int		lens;

	out = malloc(len + 1);
	if (!out)
		return (NULL);
	lens = ft_strlen((char *)s);
	if (start > (unsigned int)lens)
	{
		out[0] = '\0';
		return (out);
	}
	ft_strlcpy(out, &s[start], len + 1);
	return (out);
}
