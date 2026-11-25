/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancibore <ancibore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 19:18:59 by ancibore          #+#    #+#             */
/*   Updated: 2026/11/25 21:31:04 by ancibore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}
/*
void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, &str, 1);
		str++;
	}
}

int	main(void)
{
	char str[20] = "Geeks";
	
	ft_putstr(str);
}*/
