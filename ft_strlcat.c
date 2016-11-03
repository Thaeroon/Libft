/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:25:20 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/03 17:27:14 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_len;
	unsigned int dest_len;
	unsigned int src_len_ini;

	dest_len = 0;
	src_len_ini = 0;
	while (src[src_len_ini])
		++src_len_ini;
	while (dest[dest_len] && size)
	{
		++dest_len;
		--size;
	}
	if (size == 0)
		return (dest_len + src_len_ini);
	src_len = 0;
	while (src[src_len] && size - 1)
	{
		dest[dest_len + src_len] = src[src_len];
		--size;
		++src_len;
	}
	dest[dest_len + src_len] = '\0';
	return (dest_len + src_len_ini);
}
