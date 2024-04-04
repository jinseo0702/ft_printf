#include <stdio.h>
#include <stdlib.h>
#include <string>

int main()
{
    char *str = malloc(1);
    unsigned long long int add = 0;
    add = (unsigned long long int)str;
    printf ("%p\n", (void *)-1);
    printf ("long int size == %d\n", sizeof(long int));//둘다 같은 8byte 를 확인 했다
    printf ("long long int size == %d\n", sizeof(long long int));//
    printf("%%p Max_len is = %d\n", strlen("ffffffffffffffff"));
    return (0);    
}