#include "./libft/libft.h"
#include <stdio.h>
int main()
{
    printf("%d\n", ft_printf("Hello%c%s\n", 'A', "Helloworld!"));
    return(0);
}