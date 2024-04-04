#include "libft.h"

int	ft_putchar(unsigned char c)
{
	ssize_t cnt;

	cnt = 0;
	cnt = write(1, &c, 1);
	return (cnt);
}