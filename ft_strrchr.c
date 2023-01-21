/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:36:18 by dvilkov           #+#    #+#             */
/*   Updated: 2023/01/21 15:40:01 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strrchr(const char *s, int c)
{
	int	i;
	const char ch = c;

	i = 0;
	while(s[i])
		i++;
	while(i >= 0 || ch == '\0')
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}	
	return (NULL);
}
