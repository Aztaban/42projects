/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:18:11 by mjusta            #+#    #+#             */
/*   Updated: 2025/05/20 12:21:29 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int is_hello(char *str)
{
    int i = 0;
    char *target = "hello";
    while (str[i] && target[i] && str[i] == target[i])
        i++;
    return (str[i] == '\0' && target[i] == '\0');
}

int ft_count_if(char **tab, int (*f)(char*));

int main(void)
{
    char *words[] = {"hello", "world", "hello", "42", 0};
    int count = ft_count_if(words, is_hello);
    // Should return 2
    printf("%d", count);
    return 0;
}

