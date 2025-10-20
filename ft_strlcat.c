/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:01:55 by toespino          #+#    #+#             */
/*   Updated: 2025/10/19 12:11:07 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	lenbis;
	size_t	i;

	lenbis = ft_strlen((char *)src);
	if (size == 0)
		return (lenbis);
	i = 0;
	len = ft_strlen(dst);
	if (size <= len)
		return (size + lenbis);
	while (src[i] && i + len + 1 < size)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + lenbis);
}
