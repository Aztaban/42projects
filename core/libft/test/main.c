/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:14:16 by mjusta            #+#    #+#             */
/*   Updated: 2025/05/21 12:29:33 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

void	print_result(const char *desc, int passed)
{
	printf("Test %-30s: %s\n", desc, passed ? "✅ OK" : "❌ FAIL");
}

void	test_isalpha(void)
{
	print_result("ft_isalpha('a')", ft_isalpha('a') == !!isalpha('a'));
	print_result("ft_isalpha('Z')", ft_isalpha('Z') == !!isalpha('Z'));
	print_result("ft_isalpha('1')", ft_isalpha('1') == !!isalpha('1'));
	print_result("ft_isalpha('%')", ft_isalpha('%') == !!isalpha('%'));
}

void	test_isdigit(void)
{
	print_result("ft_isdigit('0')", ft_isdigit('0') == !!isdigit('0'));
	print_result("ft_isdigit('5')", ft_isdigit('5') == !!isdigit('5'));
	print_result("ft_isdigit('a')", ft_isdigit('a') == !!isdigit('a'));
	print_result("ft_isdigit('@')", ft_isdigit('@') == !!isdigit('@'));
}

int	main(void)
{
	printf("\n--- libft Function Tests ---\n\n");

	test_isalpha();
	printf("\n");
	test_isdigit();

	printf("\n----------------------------\n");
	return (0);
}
