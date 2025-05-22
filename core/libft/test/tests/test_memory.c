#include "../utils/utils.h"

void	test_memset(void)
{
	unsigned char buf1[20];
	unsigned char buf2[20];

	// Test 1
	ft_memset(buf1, 'A', 10);
	memset(buf2, 'A', 10);
	print_result("memset 10 bytes to 'A'", memcmp(buf1, buf2, 10) == 0);

	// Test 2
	ft_memset(buf1, 0x00, 20);
	memset(buf2, 0x00, 20);
	print_result("memset 20 bytes to 0x00", memcmp(buf1, buf2, 20) == 0);

	// Test 3
	ft_memset(buf1, 255, 5);
	memset(buf2, 255, 5);
	print_result("memset first 5 bytes to 255", memcmp(buf1, buf2, 5) == 0);

	// Test 4
	ft_memset(buf1, 'X', 0);
	memset(buf2, 'X', (size_t)0);
	print_result("memset 0 bytes (n = 0)", memcmp(buf1, buf2, 20) == 0);
}

void test_bzero(void)
{
    char buf1[10] = "123456789";
    char buf2[10] = "123456789";

    ft_bzero(buf1, 5);
    bzero(buf2, 5);
    print_result("bzero 5 bytes", memcmp(buf1, buf2, 10) == 0);
}


void    run_memory_tests(void)
{   
    printf("\n[ Memory tests ]\n");
    printf("----------------------------------\n");
	test_memset();
	printf("----------------------------------\n");
	test_bzero();
	printf("----------------------------------\n");
	
	printf("----------------------------------\n");
	
	printf("----------------------------------\n");
	
	printf("----------------------------------\n");
}