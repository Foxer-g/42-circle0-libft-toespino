/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:01:55 by toespino          #+#    #+#             */
/*   Updated: 2025/10/17 16:18:11 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	lenbis;
	size_t	i;

	len = ft_strlen(dst);
	lenbis = ft_strlen((char *)src);
	i = 0;
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
