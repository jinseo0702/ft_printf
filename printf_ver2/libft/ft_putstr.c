#include "libft.h"

int	ft_putstr(const char *s)
{
    ssize_t cnt;

    cnt = 0;
	while (*s)
	{
		cnt += write(1, s, 1);
		s++;
	}
    return((int)cnt);
}