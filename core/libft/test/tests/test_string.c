#include "../utils/utils.h"

void	test_strlen(void)
{
	print_result("ft_strlen(\"\")", ft_strlen("") == strlen(""));
	print_result("ft_strlen(\"Hello\")", ft_strlen("Hello") == strlen("Hello"));
	print_result("ft_strlen(\"This is something\")", ft_strlen("This is something") == strlen("This is something"));
	print_result("ft_strlen(\"   \")", ft_strlen("   ") == strlen("   "));
	print_result("ft_strlen(\"\\n\\t\\r\")", ft_strlen("\n\t\r") == strlen("\n\t\r"));
}

void    run_string_tests(void)
{   
    printf("\n[ String tests ]\n");
    print_line();
	test_strlen();
	print_line();
}