/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancibore <ancibore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 18:33:23 by ancibore          #+#    #+#             */
/*   Updated: 2026/11/25 18:50:16 by ancibore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = -5;
	int b = -2;
	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);
	printf("Div: %d\n", div);
	printf("Mod: %d\n", mod);
}*/
