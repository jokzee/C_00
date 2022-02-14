/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgokyar <mgokyar@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:48:50 by mgokyar           #+#    #+#             */
/*   Updated: 2022/02/13 13:52:20 by mgokyar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	l;
	int	r;

	l = 0;
	r = 1;
	while (l <= 98)
	{
		r = l + 1;
		while (r <= 99)
		{
			ft_putchar((l / 10) + 48);
			ft_putchar((l % 10) + 48);
			write(1, " ", 1);
			ft_putchar((r / 10) + '0');
			ft_putchar((r % 10) + '0');
			if (l != 98 || r != 99)
			{
				write(1, ", ", 2);
			}
			r++;
		}
		l++;
	}
}
