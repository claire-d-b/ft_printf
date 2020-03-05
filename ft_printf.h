/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clde-ber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:16:20 by clde-ber          #+#    #+#             */
/*   Updated: 2020/03/05 18:46:55 by clde-ber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct	s_flag
{
	int		width;
	int		precision;
	int		set_prec;
	int		rev;
	int		zero;
	int		ret;
	int		bool_1;
	int		bool_2;
	int		bool_3;
	int		waste;
	int		free;
}				t_flag;

int				ft_printf(const char *format, ...);
void			init_struct(t_flag *help);
void			init_all_except_ret(t_flag *help);
int				find_index(int i, const char *str);
int				ft_putstr_len(char c, const char *str, t_flag *help);
int				ft_putchar(char c, t_flag *help);
char			*to_hex(char c, unsigned long long n, char *base);
int				ft_atoi(const char *str);
const char		*ft_itoa_u(unsigned int n);
const char		*ft_itoa(int n);
const char		*join_a_free(const char *s1, const char *s2);
const char		*ft_strjoin(const char *s1, const char *s2);
int				ft_strlen(const char *s);
int				ft_isdigit(int c);
void			fill_struct_conv(t_flag *help, char c, va_list args);
void			fill_struct(t_flag *help, const char *format, va_list args);
int				is_conv(const char c);
int				is_flag(const char c);
int				find_percent(const char *str);
char			*str_toupper(char *str);
char			*revstr(char *str);
int				ft_putstr_len(char c, const char *str, t_flag *help);
int				ft_putstr_len_rev(int i, char c, const char *str, t_flag *help);
int				ft_putstr_len_standard(int i, char c, const char *str,
				t_flag *help);
int				write_string_rev(int k, const char *str, t_flag *help);
void			write_others_rev(int k, const char *str, t_flag *help);
int				write_string(int k, char c, const char *str, t_flag *help);
int				write_address(int k, const char *str);
int				write_minus(int k, char c, const char *str, t_flag *help);
int				width_len_conditions_standard(int j, char c, const char *str,
				t_flag *help);
void			update_flags(char c, const char *str, t_flag *help);
void			manage_characters(t_flag *help, char c, va_list args);
void			manage_hex(t_flag *help, char c, va_list args);
void			manage_pointers(t_flag *help, char c, va_list args);
void			manage_numbers(t_flag *help, char c, va_list args);

#endif
