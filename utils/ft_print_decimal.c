/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:19:55 by kchaouki          #+#    #+#             */
/*   Updated: 2022/10/19 13:23:57 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_decimal(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		count++;
	}
	count += ft_change_base(nbr, "0123456789");
	return (count);
}
