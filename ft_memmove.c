/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:35:08 by toespino          #+#    #+#             */
/*   Updated: 2025/10/17 14:31:22 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	ptr1 = dest;
	ptr2 = src;
	if (dest > src)
	{
		while (n--)
			ptr1[n] = (unsigned char)ptr2[n];
		return (ptr1);
	}
	else
		return (ft_memcpy(dest, src, n));
}
