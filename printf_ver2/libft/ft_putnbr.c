#include "libft.h"

int	ft_putnbr(int n)
{
	long int	nb;
	long int	div;
    ssize_t     cnt_nbr;
	char		x;

	nb = (long int)n;
	div = 1;
    cnt_nbr = 0;
	if (n < 0)
	{
		cnt_nbr += ft_putchar('-');
		nb *= -1;
	}
	while (nb / div > 9)
		div *= 10;
	while (div > 0)
	{
		x = (nb / div) + 48;
		cnt_nbr += ft_putchar(x);
		nb %= div;
		div /= 10;
	}
    return (cnt_nbr);
}