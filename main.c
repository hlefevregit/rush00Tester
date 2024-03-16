/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:54:41 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/16 12:15:15 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	rush_test(int x, int y);

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	printf("Welcome to Rush00, you will test the exercise 3\n");
	printf("Please enter a value for x : \n");
	char *lin_x = NULL;
	size_t len_x = 0;
	ssize_t size_x = 0;
	size_x = getline(&lin_x, &len_x, stdin);
	x = atoi(lin_x);
	if (!x)
	{
		printf("The value you tried to turn in is wring, please enter a valid number\n");
		return (0);
	}
	printf("The value for x is : %i\n", x);
	printf("Please enter a value for y : \n");
	char	*lin_y = NULL;
	size_t	len_y = 0;
	ssize_t	size_y = 0;
	size_y = getline(&lin_y, &len_y, stdin);
	y = atoi(lin_y);
	if (!y)
	{
                printf("The value you tried to turn in is wring, please enter a valid number\n");
                return (0);
        }
	printf("The value of y is : %i\n", y);
	printf("The expected return of the exercise is : \n");
	rush_test(x, y);
	printf("Your return is : \n");
	rush(x, y);
	return (0);
}
