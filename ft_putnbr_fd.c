/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:56:32 by toespino          #+#    #+#             */
/*   Updated: 2025/10/29 16:15:12 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*out;

	if (fd < 1)
		return ;
	out = ft_itoa(n);
	if (!out)
		return ;
	ft_putstr_fd(out, fd);
	free(out);
	return ;
}
