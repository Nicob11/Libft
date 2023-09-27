/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:57:50 by febasma           #+#    #+#             */
/*   Updated: 2023/09/19 15:07:42 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
        i++;
        if (str[i] == '-')
            sign = -1;
        if (str[i] == '-' || str[i] == '+')
            i++;
        while (str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10 + str[i] - '0';
            i++;
        }
        return (res * sign);
}


// int main()
// {
//     char str[] = "    +   4156";
//     int i = ft_atoi(str);
//     int j = atoi(str);
//     printf("%d\n", i);
//     printf("%d\n", j);
//     return (0);
// }