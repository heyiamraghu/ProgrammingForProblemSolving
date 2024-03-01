#include <stdio.h>
#include <stdlib.h>

float rateslab(int units)
{
    if (units <= 199)
    {
        return 1.20;
    }
    else if (units >= 200 && units <= 399)
    {
        return 1.50;
    }
    else if (units >= 400 && units <= 599)
    {
        return 1.80;
    }
    else if (units >= 600)
    {
        return 2.0;
    }
    else
    {
        return 0.0;
    }
}