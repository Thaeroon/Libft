/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:38:05 by nicolas           #+#    #+#             */
/*   Updated: 2016/11/04 16:07:02 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		len;

	len = (n < 0);
	while (n != 0)
	{
		n /= 10;
		++len;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		len;

	if (n == -2147483648)
		return (strdup("-2147483648"));
	if (n == 0)
		return (strdup("0"));
	len = ft_intlen(n);
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ret[len--] = '\0';
	while (n != 0)
	{
		ret[len--] = n % 10 + '0';
		n /= 10;
	}
	if (len == 0)
		ret[len] = '-';
	return (ret);
}
