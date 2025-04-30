/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_to_words.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:10:12 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/27 23:01:50 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_TO_WORDS_H
# define NUMBERS_TO_WORDS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_entry
{
	int		number;
	char	*str;	
}	t_entry;

typedef struct s_dict
{
	t_entry	*basic;
	int		basic_size;
	t_entry	*powers;
	int		powers_size;
	char	*original_buffer;
}	t_dict;

// Main logic
int		process(char *number_str, char *dict_name);

// Loading
int		load_dictionary(char *filename, t_dict *dict);
char	*read_dict(char *filename);
void	print_dict_error(void);
int		alloc_dict_entries(t_dict *dict, int basic_count, int powers_count);
int		count(char **lines, int *basic_count, int *powers);

// Parsing
char	**split_into_triplets(char *num_str, int *tri_count);

// Conversion
void	triplet_to_words(char *triplet, t_dict *dict);
void	build_text(char **triplets, int triplet_count, t_dict *dict);

// Cleanup
void	free_dictionary(t_dict *dict);
void	free_triplets(char **triplets, int triplet_count);
void	ft_bzero(void *s, size_t n);

// Helpers
int		ft_atoi(char *str);
void	ft_putstr(char *str);

// Parsing helpers
char	*skip_spaces(char *str);
int		parse_line(char *line, int *num_or_pow, char **word, int *is_power);

// Dictionary search helpers
char	*find_word_in_entries(int number, t_entry *entries, int size);
char	*find_basic_word(int number, t_dict *dict);
char	*find_power_word(int number, t_dict *dict);

#endif
