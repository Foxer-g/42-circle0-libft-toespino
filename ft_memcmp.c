/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:40:38 by toespino          #+#    #+#             */
/*   Updated: 2025/10/20 10:57:16 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char 	*sb1;
	unsigned char	*sb2;

	i = 0;
	sb1 = (unsigned char *)s1;
	sb2 = (unsigned char *)s2;
	while (i < n)
	{
		if (sb1[i] != sb2[i])
			return (sb1[i] - sb2[i]);
		i++;
	}
	return (0);
}
