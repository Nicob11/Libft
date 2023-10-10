/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:47:29 by febasma           #+#    #+#             */
/*   Updated: 2023/10/10 15:41:33 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int number_words(char const *s, char c)
{
	int		i;
    int     old_i;
    int     len;
    int     count;

	i = 0;
    count = 0;
    len = ft_strlen(s);
	while (i < len)
	{
        while(i < len)
        {
            if (ft_strchr(&c, s[i]) == NULL)
                break;
            i++;
        }
        old_i = i;
        while(i < len)
        {
            if (ft_strchr(&c, s[i]) != NULL)
                break;
            i++;
        }
        if(i > old_i)
            count++;
	}
	return (count);
}

int words_len(char const *s, char c)
{
    int i;
    int j;
    //int index;
    int len;
    int word_len;
    char temp[len];


    i = 0;
    j = 0;
    //index = 0;
    len = ft_strlen(s);

}

char	**ft_split(char const *s, char c)
{
    int i;
    int words;
    int wrds_len;
    int index;
	char **str;

    words = number_words(s, c);
    str = (char **)malloc(sizeof(char *) * (words + 1));
    if (str == NULL)
        return (NULL);
    
    i = 0;
    while (i < words)
    {
        wrds_len = words_len(s, c);
        str[i] = (char *)malloc(sizeof(char) * (words_len + 1));
        if (str[i] == NULL)
            return (NULL);
        i++;
    }
    
    
	return (0);
}