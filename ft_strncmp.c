/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:16 by dvilkov           #+#    #+#             */
/*   Updated: 2023/01/21 15:56:21 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned	int n)
{
	unsigned char us1;
	unsigned char us2;
	while (n-- > 0)
	{
		us1 = (unsigned char) *s1++;
		us2 = (unsigned char) *s2++;
		if (us1 != us2)
			return (us1 - us2);
		if (us1 == '\0')
			return (0);
	}
	return (0);
}