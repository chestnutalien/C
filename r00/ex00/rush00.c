/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juczerpa <juczerpa@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 13:49:36 by juczerpa          #+#    #+#             */
/*   Updated: 2026/11/22 15:25:45 by ancibore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c, int n);

void	print_first_last_line(int width)
{
	ft_putchar('o', 1);
	if (width > 1)
	{
		ft_putchar('-', width - 2);
		ft_putchar('o', 1);
	}
	write(1, "\n", 1);
}

void	print_middle_line(int width)
{
	ft_putchar('|', 1);
	if (width > 1)
	{
		ft_putchar(' ', width - 2);
		ft_putchar('|', 1);
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	if (x <= 0 || y <= 0)
		write(1, "Invalid input, please try again with different values\n", 54);
	else
	{
		while (row < y)
		{
			if (row == 0 || row == y - 1)
				print_first_last_line(x);
			else
				print_middle_line(x);
			row++;
		}
	}
}
