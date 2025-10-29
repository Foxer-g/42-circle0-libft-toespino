/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:27:35 by toespino          #+#    #+#             */
/*   Updated: 2025/10/29 15:11:45 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lennbr(int nbr)
{
	size_t	out;

	out = 0;
	if (nbr == -2147483648)
	{
		nbr = nbr / 10;
		out++;
	}
	if (nbr < 0)
	{
		out++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		out++;
	}
	out++;
	return (out);
}

static void	ft_putnbr(int nbr, char *s, int i)
{
	if (nbr == -2147483648)
	{
		s[i] = '8';
		nbr = nbr / 10;
		i--;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		s[0] = '-';
	}
	while (nbr > 9)
	{
		s[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	s[i] = nbr + 48;
	return ;
}

char	*ft_itoa(int n)
{
	char	*out;
	size_t	len_nbr;

	len_nbr = ft_lennbr(n);
	out = ft_calloc(len_nbr, sizeof(char *));
	if (!out)
		return (NULL);
	ft_putnbr(n, out, len_nbr - 1);
	return (out);
}
