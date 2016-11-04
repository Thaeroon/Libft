/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:18:04 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/04 14:12:16 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ch_dest;
	const char	*ch_src;
	size_t		index;

	if (dest && src)
	{
		ch_dest = dest;
		ch_src = src;
		index = 0;
		while (index < n)
		{
			ch_dest[index] = ch_src[index];
			++index;
		}
	}
	return (dest);
}
