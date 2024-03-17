/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:57:31 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/17 12:13:06 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_test00(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 0;
		while (++i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y))
				ft_putchar('o');
			else if ((i != 1 && i != x) && (j == 1 || j == y))
				ft_putchar('-');
			else if ((i == x && j == 1) || (i == 1 && j == y))
				ft_putchar('o');
			else if ((j != 1 && j != y) && (i == 1 || i == x))
				ft_putchar('|');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
		}
		ft_putchar('\n');
		j++;
	}
}

void	rush_test01(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (++j <= y)
	{
		i = 0;
		while (++i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y))
				ft_putchar('/');
			else if ((i == x && j == 1) || (i == 1 && j == y))
				ft_putchar('\\');
			else if ((i != 1 && i != x) && (j == 1 || j == y))
				ft_putchar('*');
			else if ((j != 1 && j != y) && (i == 1 || i == x))
				ft_putchar('*');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	rush_test04(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (++j <= y)
	{
		i = 0;
		while (++i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y))
				ft_putchar('A');
			else if ((i != 1 && i != x) && (j == 1 || j == y))
				ft_putchar('B');
			else if ((i == x && j == 1) || (x == 1 && j == y))
				ft_putchar('C');
			else if ((j != 1 || j != y) && (i == 1 || i == x))
				ft_putchar('B');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	rush_test02(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (++j <= y)
	{
		i = 0;
		while (++i <= x)
		{
			if (j == 1 && (x == 1 || x == y))
				ft_putchar('A');
			else if ((i != 1 && i != x) && (j == 1 || j == y))
				ft_putchar('B');
			else if ((j == y) && (i == 1 || i == x))
				ft_putchar('C');
			else if ((j != 1 || j != y) && (i == 1 || i == x))
				ft_putchar('B');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	rush_test03(int x, int y)
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




void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (++j <= y)
	{
		i = 0;
		while (++i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y))
				ft_putchar('/');
			else if ((i != 1 && i != x) && (j == 1 || j == y))
				ft_putchar('*');
			else if ((i == x && j == 1) || (i == 1 && j == y ))
				ft_putchar('\\');
			else if ((j != 1 && j != y) && (i == 1 || i == x))
				ft_putchar('*');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}