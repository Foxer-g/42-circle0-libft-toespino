/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:27:00 by toespino          #+#    #+#             */
/*   Updated: 2025/10/16 18:16:05 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*dest;
	int		i;

	dest = "";
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			dest = (char *)&s[i];
			break ;
		}
	}
	return (dest);
}
