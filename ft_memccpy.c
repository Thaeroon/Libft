/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:31:26 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/03 15:35:16 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*ch_dest;
	const char	*ch_src;
	size_t		index;

	ch_dest = dest;
	ch_src = src;
	index = 0;
	while (index < n)
	{
		if (ch_src[index] == c)
		{
			ch_dest[index] = ch_src[index];
			return (dest);
		}
		ch_dest[index] = ch_src[index];
		++index;
	}
	return (NULL);
}
