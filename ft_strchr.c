/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:27:00 by toespino          #+#    #+#             */
/*   Updated: 2025/10/17 16:35:25 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*dest;
	int		i;
	int		lens;

	i = 0;
	dest = NULL;
	lens = ft_strlen((char *)s) + 1;
	while (i < lens)
	{
		if (s[i] == (char)c)
		{
			dest = (char *)&s[i];
			break ;
		}
		i++;
	}
	return (dest);
}
