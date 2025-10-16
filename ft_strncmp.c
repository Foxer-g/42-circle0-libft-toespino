/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:36:40 by toespino          #+#    #+#             */
/*   Updated: 2025/10/15 19:29:59 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				dif;

	i = 0;
	dif = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && (dif == 0 && i < n))
	{
		if (s1[i] != s2[i])
			dif = s1[i] - s2[i];
		i++;
	}
	return (dif);
}
