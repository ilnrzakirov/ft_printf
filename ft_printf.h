/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:15:47 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/28 11:56:07 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_check_type(const char *f, int i, int count, va_list ap);
void	ft_putchar(char c);
int		ft_char(char c);
int		ft_str_print(char *s);
int		ft_putstr(char *s);
int		ft_str_print(char *s);
char	*ft_strdup(const char *src);
size_t	ft_strlen(char const *s);
int		len_number(int n);
int		len2_number(unsigned int n);
void	reverse(char *s);
char	*ft_itoadec(int number);
char	*ft_itoahex(unsigned int num, char x);
char	*ft_itoau(unsigned int number);
int		ft_x_printf(unsigned int number);
int		ft_X_printf(unsigned int number);
int		ft_p_printf(unsigned long long int ptr);
int		ft_u_printf(unsigned int n);
int		ft_d_i_printf(int number);
int		ft_printf(const char *f, ...);
char	*ft_itoa_p(unsigned long long int num);

#endif