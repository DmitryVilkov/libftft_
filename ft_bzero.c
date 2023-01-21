/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:36:17 by dvilkov           #+#    #+#             */
/*   Updated: 2023/01/15 19:09:15 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
	{
		*(unsigned char *)s = (unsigned char)0;
		s++;
	}
	return (s);
}