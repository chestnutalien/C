/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancibore <ancibore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 18:50:56 by ancibore          #+#    #+#             */
/*   Updated: 2026/11/25 19:09:11 by ancibore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 5;
	int b = 2;

    printf("BFR: a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("AFTR: a = %d, b = %d\n", a, b);
}*/
