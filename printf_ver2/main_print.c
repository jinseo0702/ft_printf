#include "./libft/libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d\n", ft_printf("Hello%c%s\n", 'A', "Helloworld!"));
    printf("strlen is == %ld\n", strlen("HelloAHelloworld!\n"));
    return(0);
}