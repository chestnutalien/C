/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juczerpa <juczerpa@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 15:55:31 by juczerpa          #+#    #+#             */
/*   Updated: 2026/11/22 16:47:42 by juczerpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	if (argc != 3)
		write(1, "Please pass 2 arguments\n", 24);
	else
		rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
