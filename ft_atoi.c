/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:12:53 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/03 18:13:56 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int nb;
	int str_start;
	int str_len;

	nb = 0;
	str_len = 0;
	while (nptr[str_len] == ' ')
		str_len++;
	str_start = str_len;
	if (nptr[str_len] == '-' || nptr[str_len] == '+')
		str_len++;
	while ('0' <= nptr[str_len] && nptr[str_len] <= '9')
	{
		nb = nb * 10 + (nptr[str_len] - '0');
		str_len++;
	}
	if (nptr[str_start] == '-')
		nb *= -1;
	return (nb);
}
