/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns_decimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:33:20 by kchaouki          #+#    #+#             */
/*   Updated: 2022/10/19 11:53:32 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_uns_decimal(unsigned int nbr)
{
	int	count;

	count = 0;
	count = ft_change_base(nbr, "0123456789");
	return (count);
}
