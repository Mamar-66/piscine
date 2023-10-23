/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:43:55 by omfelk            #+#    #+#             */
/*   Updated: 2023/08/03 17:54:54 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{

	if (octet > 2)
	{
		print_bits(octet / 2);
		print_bits(octet % 2);
	}
	else
		write(1, &octet, 1);

}

int	main()
{
	unsigned char	tab[] =  "22";
	print_bits(&tab);
	return (0);
}
