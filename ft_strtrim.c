/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:48:58 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/04 15:25:48 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strtrim_len(char const *s)
{
	size_t	len;

	len = 0;
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		++s;
	while (*s && *s != ' ' && *s != '\n' && *s != '\t')
	{
		++s;
		++len;
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	char	*ret;
	size_t	index;

	index = 0;
	if(!(ret = (char *)malloc(sizeof(char) * (ft_strtrim_len(s) + 1))))
		return (NULL);
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		++s;
	while (*s && *s != ' ' && *s != '\n' && *s != '\t')
		ret[index++] = *s++;
	ret[index] = '\0';
	return (ret);
}
