/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:57:31 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/16 12:15:43 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_test(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (++j <= y)
	{
		i = 0;
		while (++i <= x)
		{
			if (i == 1 && (j == 1 || j == y))
				ft_putchar('A');
			else if ((i != 1 && i != x) && (j == 1 || j == y))
				ft_putchar('B');
			else if ((i == x) && (j == 1 || j == y))
				ft_putchar('C');
			else if ((j != 1 || j != y) && (i == 1 || i == x))
				ft_putchar('B');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
