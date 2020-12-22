/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:09:02 by mgrissen          #+#    #+#             */
/*   Updated: 2019/11/17 20:47:29 by mgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t s_src;
	size_t k;

	k = 0;
	s_src = ft_strlen(src);
	if (!dst && size == 0)
		return (s_src);
	if (ft_strlen(dst) > size)
		s_src = s_src + size;
	else
		s_src = s_src + ft_strlen(dst);
	while (*dst && size != 0)
	{
		dst++;
		size--;
	}
	while (*src && 1 < size)
	{
		*dst++ = *src++;
		size--;
	}
	if (size != 0)
		*dst = '\0';
	return (s_src);
}
