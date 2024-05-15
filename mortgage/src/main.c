#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

inline float nthRoot(float x, int n)
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
    if (argc > 4 | argc < 4)
    {
        printf("3 arguments expected\n");
        return 22;
    }
    // initialize variables
    float start = atof(argv[1]);
    float interestRate = atof(argv[2]);
    float minimum = atof(argv[3]);
    if (argc == 5)
    {
        float maximum = atof(argv[4]);
    }

    // debugging purposes

    /*
    printf("%i, %i", argc, argv[0]);
    printf("start = %i, interest = %i", start, interest);
    */

    float preciseInterestRate = roundf(nthRoot(interestRate, 12));
    float result = start + (start * preciseInterestRate) - minimum;
    printf("%f", result);


    return 0;
}
