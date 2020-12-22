/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:39:39 by mgrissen          #+#    #+#             */
/*   Updated: 2019/11/16 13:21:12 by mgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (n <= 0)
	{
		nb = n * -1;
		i++;
	}
	else
		nb = n;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	i;

	i = ft_intlen(n);
	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	while (i-- > 0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
