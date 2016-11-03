/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:19:41 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/03 17:19:59 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*ret;
	int		src_len;
	int		cpt;

	src_len = 0;
	while (src[src_len])
		++src_len;
	if (!(ret = (char*)malloc(sizeof(char) * (src_len))))
		return (0);
	cpt = 0;
	while (src[cpt] != '\0')
	{
		ret[cpt] = src[cpt];
		cpt++;
	}
	ret[cpt] = src[cpt];
	return (ret);
}
