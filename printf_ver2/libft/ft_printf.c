#include "libft.h"

static int ft_type(va_list lst_va, const char *str)
{
    int cnt;

    cnt = 0;
    if (*(str + 1) == 'c')
        cnt += ft_putchar((unsigned char)va_arg(lst_va, int));
    else if (*(str + 1) == 's')
        cnt += ft_putstr(va_arg(lst_va, char *));
    else if (*(str + 1) == 'p')
        cnt += ft_putaddress(va_arg(lst_va, void *));
    else if (*(str + 1) == 'd' || *(str + 1) == 'i')
        cnt += ft_putnbr(va_arg(lst_va, int));
    else if (*(str + 1) == 'u')
        cnt	+= ft_putnbr_un(va_arg(lst_va, unsigned int));
    else if (*(str + 1) == 'x')
        cnt += ft_put_hex(va_arg(lst_va, unsigned int));
    else if (*(str + 1) == 'X')
        cnt += ft_put_hex_upper(va_arg(lst_va, unsigned int));
    else if (*(str + 1) == '%')
        cnt += ft_putchar('%');
    else
        cnt = -1;
    return (cnt);
}

static int ft_callstr(va_list lst_va, const char *str)
{
    int cnt2;

    cnt2 = 0;
    while(*str != '\0' && cnt2 != -1)
    {
        if (*str == '%')
        {
            cnt2 += ft_type(lst_va, str);
            str++;
        }
        else
            cnt2 += ft_putchar(*str);
        str++;
    }
    return (cnt2);
}

int ft_printf(const char *str, ...)
{
    va_list lst_va;
    int cnt;

    cnt = 0;
    va_start(lst_va, str);
    cnt = 0;
    cnt = ft_callstr(lst_va, str);
    va_end(lst_va);
    return (cnt);
}