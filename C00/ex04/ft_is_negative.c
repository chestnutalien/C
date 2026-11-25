/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancibore <ancibore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 20:28:39 by ancibore          #+#    #+#             */
/*   Updated: 2026/11/21 12:23:14 by ancibore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_is_negative(int n)
{
	char	p;
	char	neg;
	
	p = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write (1, &p, 1);
	}
	else
	{
		write (1, &neg, 1);
	}
}
#if MEOW
int main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(42);
	ft_is_negative(-42);
	return 0;
}
#endif
