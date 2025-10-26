/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:30:46 by toespino          #+#    #+#             */
/*   Updated: 2025/10/23 14:18:33 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	mas;
	void	*res;
	
	if (nmemb > 0 && size > SIZE_MAX / nmemb)
	{
		return (0);
	}
	mas = nmemb * size;
	res = malloc(mas);
	if (!res)
		return (NULL);
	ft_memset(res, '\0', mas);
	return (res);
}
