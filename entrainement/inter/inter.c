/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:53:04 by omfelk            #+#    #+#             */
/*   Updated: 2023/07/28 10:11:31 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *argv1, char argv, int pose)
{
	int	i;

	i = 0;
	while (i < pose)
	{
		if (argv1[i] == argv)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *argv1, char *argv2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv1[i] != '\0')
	{
		j = 0;
		while (argv2[j] != '\0')
		{
			if (argv1[i] == argv2[j])
			{
				if (check(argv1, argv1[i], i) == 1)
				{
					write(1, &argv1[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}

}

int	main(int argc, char **argv)
{
	if(argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
