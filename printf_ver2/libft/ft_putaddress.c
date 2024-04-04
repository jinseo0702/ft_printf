#include "libft.h"

int ft_putaddress(void *ptr)
{
    int cnt_put_address;
    ssize_t re_cnt;
    unsigned long int   address;
    char hex[16];

    ft_memset(hex, 0, 16);
    address = 0;
    re_cnt = 0;
    address = (unsigned long int)ptr;
    cnt_put_address = 16;
    if (address == 0)
    {
        re_cnt = write(1, "(nil)", 5);
        return ((int)re_cnt);
    }
    while (address > 0)
    {
        hex[--cnt_put_address] = "0123456789abcdef"[address % 16];
        address /= 16;
    }
    re_cnt += write(1, "0x", 2);
    re_cnt += write(1, &hex[cnt_put_address], 16 - cnt_put_address);
    return ((int)re_cnt);
}