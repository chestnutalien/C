/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancibore <ancibore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 21:47:25 by ancibore          #+#    #+#             */
/*   Updated: 2026/11/21 11:39:55 by ancibore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	write (1, &nb, 1);
}

#if MEOW
int	main(void)
{
	int	x;
	
	x = '42';
	ft_putnbr(x);
	return 0;
}
#endif
