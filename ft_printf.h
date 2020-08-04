/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:56:31 by monoue            #+#    #+#             */
/*   Updated: 2020/08/04 10:02:28 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

# define MIN(x, y) x <= y ? x : y
# define CTOI(c) c - '0'
# define NOT_SPECIFIED -1
# define SAFE_FREE(ptr) {free(ptr);ptr = NULL;}

typedef struct	s_format_info
{
	int		min_width;
	int		precision;
	char	conversion_c;
	int		minus;
	int		zero;
	void	*value;
	int		c_null;
}				t_format_info;

int	ft_strlen(char *str);
int	ft_isdigit(char c);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strjoin_free_both(char *s1, char *s2);
char	*ft_substr(char *s, int start, int len);
// char	*ft_substr(char	*str, int start, int len);
// char	*ft_ctoa(char c);
char	*ft_ctoa(unsigned int c);
char	*ft_itoa(long num);
char	*ft_utoa(unsigned int num);
// char	*ft_xtoa(unsigned int num, t_format_info *format_info);
char	*ft_xtoa(size_t num, t_format_info *format_info);
// char	*ft_ptoa(size_t num, t_format_info *format_info);
// char	*ft_xtoa(unsigned int num, char conversion_c);
// char	*ft_strdup_c(char c);
int		ft_printf(const char *format, ...);

#endif
