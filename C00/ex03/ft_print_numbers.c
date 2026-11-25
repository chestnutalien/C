/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancibore <ancibore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 20:28:18 by ancibore          #+#    #+#             */
/*   Updated: 2026/11/21 12:28:45 by ancibore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}
#if MEOW
int main(void)
{
	ft_print_numbers();
	return 0;
}
#endif
