#include <stdio.h>
#include <stdlib.h>

float rateslab(int units)
{
    if (units <= 200)
    {
        return 0.80;
    }
    else if (units >= 200 && units <= 300)
    {
        return 0.90;
    }
    else
    {
        return 1.0;
    }
}