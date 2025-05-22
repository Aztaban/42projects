#include "utils.h"

void	print_result(const char *desc, int passed)
{
	printf("Test %-30s: %s\n", desc, passed ? "✅ OK" : "❌ FAIL");
}