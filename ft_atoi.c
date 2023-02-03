/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:50:09 by dvilkov           #+#    #+#             */
/*   Updated: 2023/01/29 14:28:33 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char	*str)
{
	int	i;
	int	m;
	int	acc;

	i = 0;
	m = 0;
	acc = 0;
	while (!((str[i] >= '0' && str[i] <= '9')
		|| str[i] == '+' || str[i] == '-'))
		{
			if (str[i] == '\n' || str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || str[i] == ' ' || str[i] == '\r' )
				i++;
			else if (str[i] < ' ' || str[i] > '~')
				return (0);
			else
				i++;
		}
	while ((str[i] >= '0' && str[i] <= '9')
		|| str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m++;
		if (str[i] < '!' || str[i] > '~')
			return (0);
		if (str[i] <= '9' && str[i] >= '0')
		{
			acc = acc * 10 + str[i] - '0';
		}
		i++;
	}
	if ((m % 2 != 0))
		acc *= -1;
	return (acc);
}

