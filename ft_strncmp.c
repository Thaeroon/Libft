/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:07:01 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/03 18:07:26 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (!n)
		return (0);
	while (*s1 && *s2 && (unsigned char)*s1 == (unsigned char)*s2 && n--)
	{
		++s1;
		++s2;
	}
	if (!n && (!*s1 || !*s2))
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
