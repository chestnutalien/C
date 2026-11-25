/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancibore <ancibore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 20:24:49 by ancibore          #+#    #+#             */
/*   Updated: 2026/11/21 12:27:06 by ancibore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
#if MEOW
int	main(void)
{
	ft_putchar('w');
	ft_putchar('o');
	ft_putchar('r');
	ft_putchar('k');
	return 0;
}
#endif
