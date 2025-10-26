/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:38:37 by toespino          #+#    #+#             */
/*   Updated: 2025/10/26 15:07:35 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_trunstart(char *s2, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i])
	{
	
	}
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	int		start;
	int		end;

	s2 = calloc(ft_strlen((char *)s1), 1);
	start = 0;
	end = 0;
	i = 0;
	ft_strlcpy(s2, s1, ft_strlen((char *)s1) + 1);
}
