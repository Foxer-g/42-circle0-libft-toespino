/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:35:08 by toespino          #+#    #+#             */
/*   Updated: 2025/10/16 18:48:27 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;
	unsigned char		*temp;

	ptr = dest;
	ptr2 = src;
	temp = NULL;
	i = 0;
	while (i < n)
	{
		temp[i] = ptr2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr[i] = temp[i];
		i++;
	}
	return (dest);
}
