#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    int *np = &n;

    printf("n = 10, *np = &n\n*np(%d), np(%p)\n", n, np);
    printf("*np(%d) + 1 =\n", n);
    printf("*np(%d), np(%p)\n",++*np , np);
    printf("np + 1 =\n", n);
    printf("*np(%d)invalid access, np(%p) n = %d\n",*np , ++np, n);


    return EXIT_SUCCESS;
}