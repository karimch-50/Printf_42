/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:42:50 by kchaouki          #+#    #+#             */
/*   Updated: 2022/10/19 09:48:10 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_address(long long unsigned nbr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_change_base(nbr, "0123456789abcdef");
	return (count);
}
