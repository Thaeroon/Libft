/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:54:32 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/03 18:06:06 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		j;
	int		bl_found;
	size_t	n_tmp;

	bl_found = 0;
	if (!*s2)
		return ((char *)s1);
	while (*s1 && !bl_found && n)
	{
		if (*s2 == *s1)
		{
			j = 0;
			bl_found = 1;
			n_tmp = n;
			while (s2[j] && n_tmp--)
			{
				if (*(s1 + j) != s2[j])
					bl_found = 0;
				j++;
			}
		}
		s1++;
		--n;
	}
	return (bl_found ? (char *)s1 - 1 : 0);
}
