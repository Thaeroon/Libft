/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:50:00 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/04 14:04:47 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	unsigned char	*tmp;
	tmp = (unsigned char *)malloc(10);
	tmp = NULL;
	ft_memset(tmp, 5, 4);
	return(0);
}
