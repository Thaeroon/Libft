/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:16:07 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/04 14:30:27 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	index;
	size_t	t_start;

	index = 0;
	t_start = (size_t) start;
	if(!(ret = (char *)malloc(sizeof(char) * (len - t_start))))
		return (NULL);
	while (index + t_start < len)
	{
		ret[index] = s[index + t_start];
		++index;
	}
	ret[index] = '\0';
	return (ret);
}
