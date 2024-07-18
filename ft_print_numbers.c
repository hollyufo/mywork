#include <unistd.h>

void ft_print_numbers()
{
	write(1, "1234567890\n", 11);
}
int main()
{
	ft_print_numbers();
}