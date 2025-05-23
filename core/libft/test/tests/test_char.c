#include "../utils/utils.h"

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

void	test_isalnum(void)
{
	print_result("ft_isalnum('0')", ft_isalnum('0') == !!isalnum('0'));
	print_result("ft_isalnum('C')", ft_isalnum('C') == !!isalnum('C'));
	print_result("ft_isalnum(' ')", ft_isalnum(' ') == !!isalnum(' '));
	print_result("ft_isalnum('@')", ft_isalnum('@') == !!isalnum('@'));
}

void	test_isascii(void)
{
	print_result("ft_isascii(48)", ft_isascii(48) == !!isascii(48));
	print_result("ft_isascii(200)", ft_isascii(200) == !!isascii(200));
	print_result("ft_isascii(0)", ft_isascii(0) == !!isascii(0));
	print_result("ft_isascii(127)", ft_isascii(127) == !!isascii(127));
}

void	test_isprint(void)
{
	print_result("ft_isprint('a')", ft_isprint('a') == !!isprint('a'));
	print_result("ft_isprint(' ')", ft_isprint(' ') == !!isprint(' '));
	print_result("ft_isprint('0')", ft_isprint('0') == !!isprint('0'));
	print_result("ft_isprint('\\n')", ft_isprint('\n') == !!isprint('\n'));
}

void    run_char_tests(void)
{   
    printf("\n[ Character tests ]\n");
    print_line();
	test_isalpha();
	print_line();
	test_isdigit();
	print_line();
	test_isalnum();
	print_line();
	test_isascii();	
	print_line();
	test_isprint();
	print_line();
}