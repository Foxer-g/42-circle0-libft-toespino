/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:27:35 by toespino          #+#    #+#             */
/*   Updated: 2025/10/29 19:32:43 by toespino         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*out;
	size_t	len_nbr;
	long	n_b;

	len_nbr = ft_lennbr(n);
	n_b = (long)n;
	out = ft_calloc(len_nbr + 1, sizeof(char));
	if (!out)
		return (NULL);
	if (n < 0)
	{
		n_b *= -1;
		out[0] = '-';
	}
	len_nbr--;
	while (n_b > 9)
	{
		out[len_nbr] = (n_b % 10) + 48;
		n_b = n_b / 10;
		len_nbr--;
	}
	out[len_nbr] = n_b + 48;
	return (out);
}
