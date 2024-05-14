#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

inline unsigned root(unsigned x, unsigned n)
{
    switch (n)
    {
    case 0:
        return 1;
    case 1:
        return x;
    case 2:
        return (unsigned)sqrt((double)x);
    case 3:
        return (unsigned)cbrt((double)x);
    default:
        return (unsigned)pow(x, 1.0 / n);
    }
}

int main(int argc, char const *argv[])
{
    if (argc > 3 | argc < 3)
    {
        printf("2 arguments expected\n");
        return 22;
    }
    // initialize variables
    int start = atoi(argv[1]);
    int interest = atoi(argv[2]);

    // debugging purposes
    
    /* 
    printf("%i, %i", argc, argv[0]);
    printf("start = %i, interest = %i", start, interest);
    */

    return 0;
}
