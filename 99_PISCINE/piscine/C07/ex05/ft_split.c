/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:29:22 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/30 20:49:12 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;
	int	in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (str[i])
	{
		if (is_in_charset(str[i], charset))
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	*copy_word(char *start, int length)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	fill_split(char **result, char *str, char *charset)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_in_charset(str[i], charset))
			i++;
		start = i;
		while (str[i] && !is_in_charset(str[i], charset))
			i++;
		if (i > start)
			result[j++] = copy_word(&str[start], i - start);
	}
	result[j] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_count;

	word_count = count_words(str, charset);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	fill_split(result, str, charset);
	return (result);
}
/*
int	main(void)
{
	char	**result;
	char	*input = "Hello,,world:this:is:42";
	char	*charset = ",:";

	int	i = 0;
	result = ft_split(input, charset);
	if (!result)
		return (1);
	while (result[i])
	{
		printf("result[%d]: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
