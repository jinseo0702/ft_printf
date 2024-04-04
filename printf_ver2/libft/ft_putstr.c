#include "libft.h"

int	ft_putstr(const char *s)
{
    ssize_t cnt;

    cnt = 0;
	if (s == NULL)
	{
		cnt += write(1, "(null)", 6);
		return((int)cnt);
	}
	while (*s)
	{
		cnt += write(1, s, 1);
		s++;
	}
    return((int)cnt);
}