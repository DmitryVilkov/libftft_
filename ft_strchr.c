/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:53:52 by dvilkov           #+#    #+#             */
/*   Updated: 2023/01/21 15:35:57 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
	int	i;
	const char ch = c;

	i = 0;
	while(s[i] || ch == '\0')
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}	
	return (NULL);
}
