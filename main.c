#include <stdio.h>
#include "libft.h"

int main (void)
{
    char    *res = ft_itoa(543000);
    printf(res);
    free (res);
}