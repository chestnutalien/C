/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancibore <ancibore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 16:08:32 by ancibore          #+#    #+#             */
/*   Updated: 2026/11/25 18:36:30 by ancibore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 5;
	int	b = 10;

	printf("BFR: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("AFTR: a = %d, b = %d\n", a, b);
}*/
