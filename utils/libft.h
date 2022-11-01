/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:44:23 by kchaouki          #+#    #+#             */
/*   Updated: 2022/10/19 13:25:13 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_change_base(long long unsigned nbr, char *base);
int		ft_print_uns_decimal(unsigned int nbr);
int		ft_print_hex(unsigned int nbr, char c);
int		ft_print_decimal(long nbr);
int		ft_print_address(long long unsigned nbr);
int		ft_putchar(char c);
int		ft_putstr(char *str);
size_t	ft_strlen(char *str);

#endif