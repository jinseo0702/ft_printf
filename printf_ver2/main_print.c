#include "./libft/libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
    // printf("%d\n", ft_printf("Hello%c%s\n", 'A', "Helloworld!"));
    // printf("strlen is == %ld\n", strlen("HelloAHelloworld!\n"));
    // printf("len is + \\n %d\n", ft_printf("%p\n", (void *)0));
    // ft_printf("0x%p\n", (void *)1);
    // ft_printf("%p\n", (void *)-1);
    // ft_printf("%p\n", (void *)0);
    // ft_printf("%p\n", (void *)1);
    // char *str;
    // ft_printf("%p\n", &str);
    printf("len is %d\n", ft_printf("100 is == %d\n", 100));
    ft_printf("%d\n", 2147483648);//-->-2147483648가 출력이 되어야한다.
    ft_printf("%d\n", -2147483649);//-->2147483647가 출력이 되어야한다
    ft_printf("%d\n", 2147483647);//-->2147483647가 출력이 되어야한다.
    ft_printf("%d\n", -2147483648);//-->2147483648가 출력이 되어야한다
    ft_printf("%d\n", 0);//-->0 출력 되어야한다.
    ft_printf("%d\n", -1);//--> -1이 출력되어야한다.
    ft_printf("%d\n", 1);//--> 1이 출력되어야한다.
    return(0);
}