/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:11:26 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/04 14:29:18 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void	ft_bzero(void *s, size_t n)
 {
	unsigned char 	*ch_s;
 	size_t			index;

	if(s)
	{
	 	ch_s = s;
	 	index = 0;
	 	while (index < n)
			ch_s[index++] = 0;
	}
 }
