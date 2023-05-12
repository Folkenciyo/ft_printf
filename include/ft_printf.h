/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:52:52 by juguerre          #+#    #+#             */
/*   Updated: 2023/05/11 22:52:58 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Include libraries */
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

/* Main Functions */

// Print a formatted string to the standard output.
int		ft_printf(const char *format, ...);
// Check if the character is a format specifier.
int		ft_formats(va_list args, const char format);

/* Printer Functions */

// Print a string.
int		ft_printstr(char *str);
// Print a pointer.
int		ft_printptr(unsigned long long ptr);
// Print a pointer.
void	ft_putptr(uintptr_t num);
// Print an unsigned number.
int		ft_printui(unsigned int n);
// Print a number.
int		ft_printnbr(int n);
// Print a unsigned number.
char	*ft_uitoa(unsigned int n);
// Print a hexadecimal number.
int		ft_printhex(unsigned int num, const char format);
// Print a hexadecimal number.
void	ft_puthex(unsigned int num, const char format);

/* Measurer Functions */

// Measure the length of a pointer.
int		ft_ptrlen(uintptr_t num);
// Measure the length of a number.
int		ft_numlen(unsigned	int num);
// Measure the length of a hexadecimal number.
int		ft_hexlen(unsigned	int num);

#endif
