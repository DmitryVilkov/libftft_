/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:47:33 by dvilkov           #+#    #+#             */
/*   Updated: 2023/01/17 19:03:13 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	o;

	o = n;
	if ((NULL == src) && (NULL == dst))
		return (NULL);
	while (o-- > 0)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	}
	dst -= n;
	return (dst);
}
