/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:54:41 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/17 12:06:07 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	rush_test00(int x, int y);
void	rush_test01(int x, int y);
void	rush_test02(int x, int y);
void	rush_test03(int x, int y);
void	rush_test04(int x, int y);

void	rush(int x, int y);

int	getX(int x)
{
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
	return (x);
}

int	getY(int y)
{
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
	return (y);
}

void	doRush00(void)
{
	int	x;
	int	y;

	x = getX(x);
	y = getY(y);

	printf("The expected return of the exercise is : \n");
	rush_test00(x, y);
	printf("Your return is : \n");
	rush(x, y);
}

void	doRush01(void)
{
	int	x;
	int	y;

	x = getX(x);
	y = getY(y);

	printf("The expected return of the exercise is : \n");
	rush_test01(x, y);
	printf("Your return is : \n");
	rush(x, y);
}

void	doRush02(void)
{
	int	x;
	int	y;

	x = getX(x);
	y = getY(y);

	printf("The expected return of the exercise is : \n");
	rush_test02(x, y);
	printf("Your return is : \n");
	rush(x, y);
}

void	doRush03(void)
{
	int	x;
	int	y;

	x = getX(x);
	y = getY(y);

	printf("The expected return of the exercise is : \n");
	rush_test03(x, y);
	printf("Your return is : \n");
	rush(x, y);
}

void	doRush04(void)
{
	int	x;
	int	y;

	x = getX(x);
	y = getY(y);

	printf("The expected return of the exercise is : \n");
	rush_test04(x, y);
	printf("Your return is : \n");
	rush(x, y);
}

int	main(void)
{
	printf("Welcome to Rush00\n");
	printf("To be sure that the test will work, please turn your file you want to test in rushXX.c and keep the prototype of your function in [void rush(int x, int y)], you can only test one rush at once");
	printf("Thank you for taking part of the hulefevr rise, he'll be soon your best guru");
	printf("Choose a rush subject : \n");
	printf("Rush00 : [0]\n");
	printf("Rush01 : [1]\n");
	printf("Rush02 : [2]\n");
	printf("Rush03 : [3]\n");
	printf("Rush04 : [4]\n");
	char *rushValue;
	size_t rushValue_len;
	ssize_t rushValue_size;
	rushValue_size = getline(&rushValue, &rushValue_len, stdin);
	
	switch(atoi(rushValue))
	{
		case 0:
			doRush00();
			break;
		case 1:
			doRush01();
			break;
		case 2:
			doRush02();
			break;
		case 3:
			doRush03();
			break;
		case 4:
			doRush04();
			break;
		default:
			printf("Your request seems to be wrong, please enter a valid number beetwen 0 and 4");
			break;
	}

	return (0);
}
