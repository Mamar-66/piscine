/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:30:58 by omfelk            #+#    #+#             */
/*   Updated: 2023/07/27 23:02:07 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb);
{
	if (nb == -2147483648)
		write(1, "-2147483647", 11);
	else if (nb >= -2147483647 && nb <= 2147483647)
	{
		if (nb < 0)
		{
			put('-');
			nb = -nb;
		}
		if (nb > 9)
		{
			fut_putnbr(nb / 10);
			fut_putnbr(nb % 10);
		}
		else
			put(nb + '0');
	}
}

int	main()0
{
	ft_putnbr(42);
	return (0);
}
