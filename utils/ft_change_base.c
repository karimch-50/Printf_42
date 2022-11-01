/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:35:44 by kchaouki          #+#    #+#             */
/*   Updated: 2022/10/19 13:00:20 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_change_base(long long unsigned nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr >= ft_strlen(base))
	{
		count += ft_change_base(nbr / ft_strlen(base), base);
		count += ft_change_base(nbr % ft_strlen(base), base);
	}
	else
		count += ft_putchar(base[nbr]);
	return (count);
}
