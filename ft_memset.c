/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:15:42 by dvilkov           #+#    #+#             */
/*   Updated: 2023/01/21 13:42:18 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = len;
	while (i-- > 0)
	{
		*(unsigned char *)b = (unsigned char)c;
		b++;
	}
	return (b - len);
}
