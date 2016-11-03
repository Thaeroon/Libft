/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:25:08 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/03 17:27:26 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j] && size--)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
