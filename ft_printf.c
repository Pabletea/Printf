/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:47:38 by pabalons          #+#    #+#             */
/*   Updated: 2024/10/22 10:47:38 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printf(char const *param, ...)
{
    va_list args;
    va_start(args, param);

    int i = 0;
    int count = 0;

    while (param[i]) {
        if (param[i] == '%') {
            i++;
            if (param[i] == 's') {
                char *str_arg = va_arg(args, char *);
                count += putstr(str_arg);
            } else if (param[i] == 'd') {
                int num_arg = va_arg(args, int);
                count += putnbr(num_arg);
            }
        } else {
            write(1, &param[i], 1);
            count++;
        }
        i++;
    }
    va_end(args);
    return count;
}