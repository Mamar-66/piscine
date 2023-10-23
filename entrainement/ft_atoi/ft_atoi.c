/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:03:03 by omfelk            #+#    #+#             */
/*   Updated: 2023/08/03 22:28:42 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int	i;
	int	s;
	int	nb;

	i = 0;
	s = 0;
	nb = 0;
	while (str[i] == ' ' || str[i] <= 12 && str[i] >= 9)
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;	
	}
	if (s % 2 != 0)
		nb = nb * -1;
	return (nb);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
