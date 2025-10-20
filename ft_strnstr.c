/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:02:11 by toespino          #+#    #+#             */
/*   Updated: 2025/10/20 12:13:58 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*to_find;

	i = 0;
	j = 0;
	str = (char *)big;
	to_find = (char *)little;

	if (!to_find)
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
			if (j == len)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
