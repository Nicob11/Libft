/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:39:11 by febasma           #+#    #+#             */
/*   Updated: 2023/09/22 19:45:49 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libft.h>

char *ft_strdup(char *src)
{
   char *dest = malloc(ft_strlen(src) + 1);

   if (dest == NULL)
        return (NULL);

    ft_strlcpy(dest, src, ft_strlen(src) + 1);
    return (dest);
}

int main()
{
    char src[] = "Hello World";
    //char *dest = ft_strdup(src);
    char *dest = strdup(src);
    printf("%s", dest);
    return (0);
}