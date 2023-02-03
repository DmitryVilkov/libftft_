/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:12:20 by dvilkov           #+#    #+#             */
/*   Updated: 2023/02/03 19:32:47 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t ft_strlcat(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;
	size_t slen;
	slen = 0;
	while (--n != 0 && *d != '\0')
		d++;
	while (*s != '\0')
		slen++;
	slen -= 1;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return (dlen - slen);
	while(*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
			s++;
		}
	}
	*d = '\0';
	return(dlen + (s - src));
}
