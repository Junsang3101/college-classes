#include <stdio.h>
#include <stdlib.h>

extern unsigned random_i();
extern double random_i();

extern int MOD;

int main()
{
    
    MOD = 32767;
    for (int i=0; i<10; i++)
    {
        printf("%d", random_i());
    }
    
    return EXIT_SUCCESS;
}