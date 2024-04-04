#include "./libft/libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    int j = -2147483648;
    int k = 2147483647;
    char *arr = 0;
    char arr2[] = "hello wordl";
    // printf("d:%d\n", printf("%d\n", i));
    // printf("d:%d\n", printf("%d\n", j));
    // printf("d:%d\n", printf("%d\n", k));
    // printf("i:%d\n", printf("%d\n", i));
    // printf("i:%d\n", printf("%d\n", j));
    // printf("i:%d\n", printf("%d\n", k));
    // printf("u:%d\n", printf("%u\n", i));
    // printf("u:%d\n", printf("%u\n", k));
    // printf("x:%d\n", printf("%x\n", i));
    // printf("x:%d\n", printf("%x\n", j));
    // printf("x:%d\n", printf("%x\n", k));
    // printf("X:%d\n", printf("%X\n", i));
    // printf("X:%d\n", printf("%X\n", j));
    // printf("X:%d\n", printf("%X\n", k));
    printf("p:%d\n", printf("%p\n", arr));
    printf("p:%d\n", printf("%p\n", &arr2));
    printf("p:%d\n", printf("t:%p\n", &k));
    printf("s:%d\n", printf("%s\n", arr));
    printf("s:%d\n", printf("%s\n", arr2));
    printf("-------------------------------------\n");
    // ft_printf("d:%d\n", ft_printf("%d\n", i));
    // ft_printf("d:%d\n", ft_printf("%d\n", j));
    // ft_printf("d:%d\n", ft_printf("%d\n", k));
    // ft_printf("i:%d\n", ft_printf("%d\n", i));
    // ft_printf("i:%d\n", ft_printf("%d\n", j));
    // ft_printf("i:%d\n", ft_printf("%d\n", k));
    // ft_printf("u:%d\n", ft_printf("%u\n", i));
    // ft_printf("u:%d\n", ft_printf("%u\n", k));
    // ft_printf("x:%d\n", ft_printf("%x\n", i));
    // ft_printf("x:%d\n", ft_printf("%x\n", j));
    // ft_printf("x:%d\n", ft_printf("%x\n", k));
    // ft_printf("X:%d\n", ft_printf("%X\n", i));
    // ft_printf("X:%d\n", ft_printf("%X\n", j));
    // ft_printf("X:%d\n", ft_printf("%X\n", k));
    ft_printf("p:%d\n", ft_printf("%p\n", arr));
    ft_printf("p:%d\n", ft_printf("%p\n", &arr2));
    ft_printf("p:%d\n", ft_printf("t:%p\n", &k));
    ft_printf("s:%d\n", ft_printf("%s\n", arr));
    ft_printf("s:%d\n", ft_printf("%s\n", arr2));
    // printf("-------------------------------------\n");
    // printf("s:%d\n", printf("qweqwe%sQWE!23%d    %i1qwe%x qwe%XXXX%%%p,qwe%%%%%%123%%12312%c%pn", arr2, j, k, j, j, &i, 'a', &j));
    // ft_printf("s:%d\n", ft_printf("qweqwe%sQWE!23%d    %i1qwe%x qwe%XXXX%%%p,qwe%%%%%%123%%12312%c%pn", arr2, j, k, j, j, &i, 'a', &j));
    return(0);
}