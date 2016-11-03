/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:10:01 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/03 17:18:30 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ch_s1;
	const unsigned char	*ch_s2;

	ch_s1 = s1;
	ch_s2 = s2;
	if (!n)
		return (0);
	while (*ch_s1 && *ch_s2 && *ch_s1 == *ch_s2 && n--)
	{
		++ch_s1;
		++ch_s2;
	}
	if (!n && (!*ch_s1 || !*ch_s2))
		return (0);
	return (*ch_s1 - *ch_s2);
}
