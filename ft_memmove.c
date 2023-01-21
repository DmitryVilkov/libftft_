/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:21:23 by dvilkov           #+#    #+#             */
/*   Updated: 2023/01/21 13:40:13 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ddst;
	char const	*ssrc;

	ddst = dst;
	ssrc = src;
	i = len;
	if ((NULL == ssrc) && (NULL == ddst))
		return (NULL);
	if (ddst > ssrc)
	{
		ssrc += i - 1;
		ddst += i - 1;
		while (i-- > 0)
		{
			*(unsigned char *)ddst-- = *(unsigned char *)ssrc--;
		}
		return (dst);
	}
	while (i-- > 0)
	{
		*(unsigned char *)ddst++ = *(unsigned char *)ssrc++;
	}
	return (dst);
}
