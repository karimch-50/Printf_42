/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:02:27 by kchaouki          #+#    #+#             */
/*   Updated: 2022/10/28 06:59:38 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_args(va_list args, char format)
{
	if (format == '%')
		return (ft_putchar('%'));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_address(va_arg(args, long long unsigned)));
	else if (format == 'd' || format == 'i')
		return (ft_print_decimal(va_arg(args, int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), format));
	else if (format == 'u')
		return (ft_print_uns_decimal(va_arg(args, unsigned int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += check_args(args, str[i]);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
#include <stdio.h>

int main()
{
	int a;
	ft_printf("%x\n", -1);
	printf("%x\n", -1);
	printf("test test%d",);
	// printf("%llu\n", &a);
	// printf("%p\n", &a);
	// printf("%d\n", &a);
	return (0);
}
//   7FFEE2C96788
// 0x7ffee2c96788